#ifndef MATHS_MESSAGEINPUT_H
#define MATHS_MESSAGEINPUT_H

#include <QtGui/QPalette>
#include <QtGui/QShowEvent>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <iostream>

class MessageInput : public QWidget {

    Q_OBJECT

  public:
    MessageInput(QSize *inputSize, QWidget *parent = nullptr);

  public slots:
    void sendMessage();

  private:
    QPalette *p;
    QSize *widgetSize;
    QPushButton *sendMsgBtn;
    QTextEdit *msgEnter;
};

#endif // MATHS_MESSAGEINPUT_H