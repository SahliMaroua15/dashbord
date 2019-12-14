#ifndef VOYANT_H
#define VOYANT_H


#include<QGraphicsItem>
#include<QGraphicsScene>
#include<QGraphicsView>

class voyant : public QGraphicsItem
{
public:
    voyant(QGraphicsItem *parent=nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};
#endif // VOYANT_H
