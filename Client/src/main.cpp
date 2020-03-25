#include <iostream>
#include <QtWidgets/QApplication>
#include "../include/MainWindow.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow mainWindow;

    return app.exec();
}