#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_custom_clicked();

    void on_button_info_clicked();

    void on_button_question_clicked();

    void on_button_warning_clicked();

    void on_button_critical_clicked();

    void on_button_qt_info_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
