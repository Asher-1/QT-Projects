#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

class MyButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyButton(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent *e);

signals:
    void timeout(void);

public slots:
};

#endif // MYBUTTON_H
