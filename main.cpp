#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Neuronas_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    CapturaNeurona capturaNeurona;

    // Conectar la señal con el slot
   QObject::connect(&capturaNeurona, &CapturaNeurona::datosNeuronaGuardados, &w, &MainWindow::mostrarDatosNeurona);

    w.show();
    return a.exec();
}
