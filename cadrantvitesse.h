#ifndef CADRANTVITESSE_H
#define CADRANTVITESSE_H

#include<QGraphicsItem>
#include<QGraphicsScene>
#include<QGraphicsView>

class cadrantvitesse : public QGraphicsItem
{
public:
    cadrantvitesse(QGraphicsItem *parent=nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
      int vitesse;
};

#endif // CADRANTVITESSE_H
