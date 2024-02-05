#include "CapturaNeuronas.h"
#include "./ui_mainwindow.h"
#include "./ui_CapturaNeuronas.h"

CapturaNeuronas::CapturaNeuronas(QWidget *parent)
    : QCapturaNeuronas(parent)
    , ui(new Ui::CapturaNeuronas)
{
    ui->setupUi(this);
    QPushButton *ptr = ui->CrearNeurona;
    QObject::connect(ptr,SIGNAL(clicked()));CapturaNeuronas;
}

MainWindow::~MainWindow()
{
    delete ui;
}
