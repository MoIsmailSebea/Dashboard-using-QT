#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <Controllers/system.h>
#include <Controllers/hvachandler.h>
#include <Controllers/audiocontroller.h>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    // Create instances of your controllers
    System m_systemHandler;
    HVACHandler m_driverHVACHandler;
    HVACHandler m_passengerHVACHandler;
    AudioController m_audioController;

    // Create the QML application engine
    QQmlApplicationEngine engine;

    // Set up context properties for QML
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("systemHandler", &m_systemHandler);
    context->setContextProperty("driverHVAC", &m_driverHVACHandler);
    context->setContextProperty("passengerHVAC", &m_passengerHVACHandler);
    context->setContextProperty("audioController", &m_audioController);

    // Load the QML file
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    engine.load(url);  // Load the QML file

    // Start the application event loop
    return app.exec();
}
