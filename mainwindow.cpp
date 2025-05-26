#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Random>
#include <QString>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , gen(rd())
    , dist(1, 100)
{
    ui->setupUi(this);

    secretNumber = dist(gen);

    connect(ui->pushButton_Try, &QPushButton::clicked, this, &MainWindow::guessCheck);

    ui->label_Feedback->setText("Tente acertar!!!");

}

void MainWindow::guessCheck() {

    // Se o botão está com o texto "Recomeçar", sorteia novo número
    if (ui->pushButton_Try->text() == "Recomeçar") {
        secretNumber = dist(gen);
        ui->pushButton_Try->setText("Tentar");
        ui->lineEdit_Guess->clear();
        return;
    }

    // Lê o texto digitado e converte para inteiro
    QString textoDigitado = ui->lineEdit_Guess->text();
    bool ok;
    int guess = textoDigitado.toInt(&ok);

    if (!ok) {
        QMessageBox::warning(this, "Entrada inválida", "Por favor, digite um número válido!");
        return;
    }
    if (guess > secretNumber) {
        ui->label_Feedback->setText("Muito alto!");
        ui->lineEdit_Guess->clear();
    } else if (guess < secretNumber) {
        ui->label_Feedback->setText("Muito baixo!");
        ui->lineEdit_Guess->clear();
    } else {
        ui->label_Feedback->setText("Acertou!");
        ui->pushButton_Try->setText("Recomeçar");
        ui->lineEdit_Guess->clear();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
