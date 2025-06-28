#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_button_custom_clicked(){
    QMessageBox::about(this, "Custom messagebox", "This is a custom messagebox");
}

void MainWindow::on_button_info_clicked(){
    QMessageBox::information(this, "Info messagebox", "This is an information messagebox");
}

void MainWindow::on_button_question_clicked(){
    QMessageBox::question(this, "Question messagebox", "This is a question messagebox");
}

void MainWindow::on_button_warning_clicked(){
    QMessageBox::warning(this, "Warning messagebox", "This is a warning messagebox");
}

void MainWindow::on_button_critical_clicked(){
    QMessageBox::critical(this, "Critical messagebox", "This is a critical messagebox");
}


void MainWindow::on_button_qt_info_clicked(){
    QMessageBox::aboutQt(this, "Qt6 info messagebox");
}
