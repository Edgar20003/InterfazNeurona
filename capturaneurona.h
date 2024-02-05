#ifndef CAPTURANEURONA_H
#define CAPTURANEURONA_H
#include <QDialog>
#include <QList>

namespace Ui {
class CapturaNeurona;
}

struct NeuronaData {
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
};

class CapturaNeurona : public QDialog
{
    Q_OBJECT

public:
    explicit CapturaNeurona(QWidget *parent = nullptr);
    ~CapturaNeurona();

    // Método para obtener la lista de neuronas (si es necesario proporcionar acceso externo)
    const QList<NeuronaData>& obtenerListaNeuronas() const;

signals:
    void datosNeuronaGuardados(const QList<NeuronaData>& listaNeuronas);

private:
    Ui::CapturaNeurona *ui;
    QList<NeuronaData> listaNeuronas; // Lista para almacenar los datos de las neuronas

private slots:
    void on_buttonGuardar_clicked();
};

#endif // CAPTURANEURONA_H
