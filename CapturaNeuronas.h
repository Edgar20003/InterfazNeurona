#ifndef CAPTURANEURONAS_H
#define CAPTURANEURONAS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class CapturaNeuronas;
}
QT_END_NAMESPACE

class CapturaNeuronas : public QCapturaNeuronas
{
    Q_OBJECT

public:
    CapturaNeuronas(QWidget *parent = nullptr);
    ~CapturaNeuronas();

private:
    Ui::CapturaNeuronas *ui;
};

#endif // CAPTURANEURONAS_H
