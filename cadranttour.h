#ifndef CADRANTTOUR_H
#define CADRANTTOUR_H
#include "cadrantvitesse.h"
#include<QGraphicsItem>
#include<QGraphicsScene>
#include<QGraphicsView>

class cadranttour : public QGraphicsItem
{
public:
    cadranttour(QGraphicsItem *parent=nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int tpm;
};

#endif // CADRANTTOUR_H
