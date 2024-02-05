#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "capturaneurona.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_CrearNeurona_clicked();

public slots:
    void mostrarDatosNeurona(const QList<NeuronaData>& listaNeuronas);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
