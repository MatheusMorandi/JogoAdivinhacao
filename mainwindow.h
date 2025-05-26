#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Random>

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

    void guessCheck();

private:
    Ui::MainWindow *ui;
    std::random_device rd;
    std::mt19937 gen;
    std::uniform_int_distribution<> dist;
    int secretNumber;
};
#endif // MAINWINDOW_H
