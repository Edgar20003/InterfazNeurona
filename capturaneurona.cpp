#include "capturaneurona.h"
#include "ui_capturaneurona.h"

CapturaNeurona::CapturaNeurona(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CapturaNeurona)
{
    ui->setupUi(this);

    // Conéctate al slot cuando se presiona el botón de guardar
    connect(ui->buttonGuardar, &QPushButton::clicked, this, &CapturaNeurona::on_buttonGuardar_clicked);
}

CapturaNeurona::~CapturaNeurona()
{
    delete ui;
}

void CapturaNeurona::on_buttonGuardar_clicked()
{
    // Obtén los datos de los Line Edits
    int id = ui->lineEditID->text().toInt();
    float voltaje = ui->lineEditVoltaje->text().toFloat();
    int posicion_x = ui->lineEditPosicion_x->text().toInt();
    int posicion_y = ui->lineEditPosicion_y->text().toInt();
    int red = ui->lineEditRed->text().toInt();
    int green = ui->lineEditGreen->text().toInt();
    int blue = ui->lineEditBlue->text().toInt();

    // Crea una instancia de NeuronaData con los datos
    NeuronaData neuronaData;
    neuronaData.id = id;
    neuronaData.voltaje = voltaje;
    neuronaData.posicion_x = posicion_x;
    neuronaData.posicion_y = posicion_y;
    neuronaData.red = red;
    neuronaData.green = green;
    neuronaData.blue = blue;

    // Agrega la instancia a la lista
    listaNeuronas.append(neuronaData);

    // Emite la señal con la lista actualizada
    emit datosNeuronaGuardados(listaNeuronas);
}
