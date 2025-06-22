#include <QCoreApplication>
#include <iostream>
#include <string>

#include <QTextStream>
#include <QDebug>
// This is the main cpp file from a console application in Qt Creator
// Three different ways of asking a name and printing it

// Printing a name the c++ way
void name_print_cpp(){
	// Declaring a standard string variable
    std::string name;
    std::cout << "Enter your name: ";
    // Reading full line input from user
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "\n";
}

// Printing a name the Qt way
void name_print_qt(){
	// Input stream from standard input
    QTextStream qin(stdin);
    // Output stream to standard output
    QTextStream qout(stdout);

    qout << "Enter your name: ";
    // Flushing output to ensure it appears
    qout.flush();
    QString name = qin.readLine();
    qout << "Hello " << name;
    qout.flush();
}

// Printing a name the mixed way
void name_print_mix(){
	// Input stream from standard input
    QTextStream qin(stdin);

    qInfo() << "Enter your name: ";
    QString name = qin.readLine();
    qInfo() << "Hello " << name;
}

int main(int argc, char *argv[])
{
	// Initialize the Qt core application
	QCoreApplication a(argc, argv);

	// Calling the function 'name_print()'
	name_print_mix();

    return a.exec();
}
