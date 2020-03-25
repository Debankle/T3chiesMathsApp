#ifndef MATHS_CHATDISPLAY_H
#define MATHS_CHATDISPLAY_H

#include <QtWidgets/QWidget>

class ChatDisplay : public QWidget {

    Q_OBJECT

    public:
        ChatDisplay(QSize *displayWidgetSize, QWidget *parent = nullptr);

    private:
        QSize *widgetSize;
        QPalette *p;
};

#endif // MATHS_CHATDISPLAY_H