#include "cadranthuile.h"
#include <QGraphicsItem>

cadranthuile::cadranthuile(QGraphicsItem *parent)
{

}
QRectF cadranthuile::boundingRect() const
{
    QRectF rectf(-800,-500,1600,1000);
    return rectf;
}

void cadranthuile::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

 QPen pen;
 painter->setRenderHint(QPainter::Antialiasing);


    for (int i=0;i<=20;i+=1)
    {
        if(i%5==0){
            painter->setPen(QPen(QBrush("white"), 20, Qt::SolidLine, Qt::FlatCap));
            QRect rectTrait(100,-330,400,400);
            painter->drawArc(rectTrait,(40+i*2)*16,10);
        }
        else{
            pen.setWidthF(50);
            painter->setPen(QPen(QBrush("white"), 05, Qt::SolidLine, Qt::FlatCap));
            QRect rectTrait(100,-330,400,400);
            painter->drawArc(rectTrait,(40+i*2)*16,10);
        }
    }

    QPixmap tempmot("/home/sahli/Bureau/Icones/voyant-ldr-liquide-refroidissement.gif");
    painter->drawPixmap(335,-220,30,30,tempmot);


  painter->setPen(QPen( Qt::white , 4, Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin));
    painter->drawLine(350, -225, 340, -290);

    painter->setFont(QFont("georgia", 10, -1,false));
   painter->setPen(QPen(QBrush("white"), 20, Qt::SolidLine, Qt::FlatCap));
    painter->drawText(QRectF(300,-330,50,50),Qt::AlignCenter,"130");
   painter->drawText(QRectF(360,-310,50,50),Qt::AlignCenter,"90");
   painter->setPen(QPen(QBrush("RED"), 20, Qt::SolidLine, Qt::FlatCap));
   painter->drawText(QRectF(420,-270,50,50),Qt::AlignCenter,"50");


{QPen pen;
pen.setColor("white");
QBrush brush(Qt::SolidPattern);
brush.setColor("white");
painter->setPen(pen);
painter->setBrush(brush);
QRect recticone (345, -230, 15, 15);
painter->drawEllipse(recticone);


      }
}
