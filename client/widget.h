#ifndef WIDGET_H
#define WIDGET_H

#include <QObject>

class Widget : public QObject
{
    Q_OBJECT
public:
    explicit Widget(QObject *parent = nullptr);

signals:

public slots:
};

#endif // WIDGET_H