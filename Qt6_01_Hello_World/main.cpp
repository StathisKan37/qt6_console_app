// Most important library:
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]){

    // Definning the object of QApplication
    QApplication app(argc, argv);
    // Label: "Hello World"
    QLabel *label = new QLabel("Hello World!");
    // Setting the title of the window
    label->setWindowTitle("Hello World app");
    // Resizing the label (300x300)
    label->resize(300,300);
    // Showing the window
    label->show();

    return app.exec();
}
