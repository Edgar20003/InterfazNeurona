#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "capturaneurona.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CrearNeurona_clicked()
{
    this->close();

    CapturaNeurona *capturaNeurona = new CapturaNeurona();
    capturaNeurona->show();

}

void MainWindow::mostrarDatosNeurona(const QList<NeuronaData>& listaNeuronas)
{
    // Aquí puedes decidir cómo deseas mostrar los datos, por ejemplo, imprimir en la consola
    for (const NeuronaData& neurona : listaNeuronas) {
        qDebug() << "ID:" << neurona.id
                 << "Voltaje:" << neurona.voltaje
                 << "Posicion_x:" << neurona.posicion_x
                 << "Posicion_y:" << neurona.posicion_y
                 << "Red:" << neurona.red
                 << "Green:" << neurona.green
                 << "Blue:" << neurona.blue;
    }

    // Puedes también mostrar los datos en otro widget, actualizar una tabla, etc.
}

