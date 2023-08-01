#ifndef CUSTOMTITLEBAR_H
#define CUSTOMTITLEBAR_H

#include <QWidget>
#include <QMouseEvent>
#include <QPainter>

//class CustomTitleBar : public QWidget
//{
//    Q_OBJECT
//public:
//    explicit CustomTitleBar(QWidget *parent = nullptr);

//signals:

//};

class CustomTitleBar : public QWidget
{
    Q_OBJECT
public:
    CustomTitleBar(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override
    {
        // Custom painting code for the title bar
        QPainter painter(this);
        painter.fillRect(rect(), QColor(50, 50, 50));  // Example: Setting the background color

        // You can add more customizations, such as drawing buttons, icons, or text.
    }
};

#endif // CUSTOMTITLEBAR_H
