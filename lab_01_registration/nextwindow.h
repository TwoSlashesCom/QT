#ifndef NEXTWINDOW_H
#define NEXTWINDOW_H

#include <QDialog>

namespace Ui {
class NextWindow;
}

class NextWindow : public QDialog
{
    Q_OBJECT

public:
    explicit NextWindow(QWidget *parent = nullptr);
    ~NextWindow();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::NextWindow *ui;
};

#endif // NEXTWINDOW_H
