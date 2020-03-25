#include "../include/MessageInput.hpp"

MessageInput::MessageInput(QSize *inputSize, QWidget *parent)
    : QWidget(parent) {
    this->widgetSize = inputSize;

    this->p = new QPalette();
    this->p->setColor(QPalette::Window, Qt::yellow);
    this->setAutoFillBackground(true);
    this->setPalette(*this->p);

    msgEnter = new QTextEdit(this);
    msgEnter->setGeometry(5, 5, widgetSize->width() - 10,
                          widgetSize->height() - 10);
    msgEnter->setParent(this);
    msgEnter->show();

    sendMsgBtn = new QPushButton(this);
    sendMsgBtn->setGeometry(widgetSize->width() - widgetSize->height() + 5, 5,
                            widgetSize->height() - 10,
                            widgetSize->height() - 10);
    sendMsgBtn->setText("Send Message");
    sendMsgBtn->show();

    connect(sendMsgBtn, SIGNAL(released()), this, SLOT(sendMessage()));

    this->show();
}

void MessageInput::sendMessage() {
    QString text = msgEnter->toPlainText();
    std::cout << text.toUtf8().constData() << std::endl;
    msgEnter->setPlainText("");
}