#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <qtimer.h>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();


public slots:
    void upclick();
    void uppress();
    void uprelease();



signals:
    void timeout();

protected:
    //键盘按下事件
//    virtual void mousePressEvent(QMouseEvent *event);
//    virtual void mouseReleaseEvent(QMouseEvent *event);

//    //计时器事件
//    void timerEvent(QTimerEvent *);
//    //鼠标点击事件
//    void mousePressEvent(QMouseEvent *);
//    //关闭事件
//    void closeEvent(QCloseEvent *);

//    //事件过滤器
//    bool eventFilter(QObject *obj, QEvent *e);

private:
    Ui::MyWidget *ui;
    static int sec;
    int timerId;
    int timeId2;

    QTimer *timer;

};

#endif // MYWIDGET_H
