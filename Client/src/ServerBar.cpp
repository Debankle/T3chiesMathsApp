#include "../include/ServerBar.hpp"

ServerBar::ServerBar(QSize *sideBarSize, MathsDisplay *mthDsplPtr,
                     QWidget *parent)
    : QWidget(parent) {

    this->mthDsplPtr = mthDsplPtr;
    this->widgetSize = sideBarSize;

    this->p = new QPalette();
    this->p->setColor(QPalette::Window, Qt::blue);
    this->setAutoFillBackground(true);
    this->setPalette(*this->p);

    this->loadServers();
    this->renderServers();

    ServerBar::show();
}

// https://stackoverflow.com/questions/49721121/reading-csv-with-fstream-and-only-fstream
void ServerBar::loadServers() {
    this->serverStream =
        new std::fstream("~/Library/Application Support/Maths App/servers.txt",
                         std::ios::in | std::ios::out);

    // TODO: add error handling cause im lazy
    char buffer[256];
    while (this->serverStream->getline(buffer, 256, '\n')) {
        std::cout << buffer << std::endl;
    }
}

void ServerBar::renderServers() {
    this->w1 = new ServerWidget(
        this->mthDsplPtr, "Server 1",
        "This is the first server, for serious mathematicians", this);
    this->w1->setGeometry(5, 5, widgetSize->width() - 10,
                          widgetSize->height() / 10 - 5);
    this->w1->setParent(this);
    this->w2 = new ServerWidget(this->mthDsplPtr, "Server 2",
                                "This is the second server, for students who "
                                "don't do specialists mathematics",
                                this);
    this->w2->setGeometry(5, 5 + widgetSize->height() / 10,
                          widgetSize->width() - 10,
                          widgetSize->height() / 10 - 5);
    this->w2->setParent(this);
}

ServerBar::~ServerBar() {
    if (this->serverStream->is_open()) {
        this->serverStream->close();
    }

    delete this->serverStream;
}
