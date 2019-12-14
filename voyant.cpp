#include "voyant.h"
#include <QGraphicsItem>
#include <QObject>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QRectF>
#include <QtMath>
#include <QtDebug>
#include <QPointF>
#include <QDateTime>

voyant::voyant(QGraphicsItem *parent)
{

}

QRectF voyant::boundingRect() const
{
    QRectF rectf(-800,-500,1600,1000);
    return rectf;
}

void voyant::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    painter->setRenderHints(QPainter::Antialiasing);

    QPixmap clignDroit("/home/sahli/Bureau/Icones/clign-droit.jpg");
     painter->drawPixmap(100,200,60,35,clignDroit);

    QPixmap clignGauche("/home/sahli/Bureau/Icones/clign-gauche.jpg");
      painter->drawPixmap(-160,200,70,38,clignGauche);


    QPixmap clignBatt("/home/sahli/Bureau/Icones/voyant-batterie.gif");
       painter->drawPixmap(-310,-210,40,40,clignBatt);

    QPixmap clignhuile("/home/sahli/Bureau/Icones/voyant-huile-rouge.jpg");
        painter->drawPixmap(-348,-130,40,40,clignhuile);


    QPixmap clignhuileJ("/home/sahli/Bureau/Icones/voyant-huile-orange.jpg");
         painter->drawPixmap(-330,-170,40,40,clignhuileJ);


    QPixmap clignporte("/home/sahli/Bureau/Icones/portieres.jpg");
          painter->drawPixmap(-20,-370,50,50,clignporte);

    QPixmap clignceinture("/home/sahli/Bureau/Icones/ceinture.jpg");
           painter->drawPixmap(50,-360,50,50,clignceinture);


    QPixmap clignairbag("/home/sahli/Bureau/Icones/voyant-airbag.gif");
            painter->drawPixmap(-100,-360,50,50,clignairbag);

    QPixmap clignabs("/home/sahli/Bureau/Icones/voyant-abs.gif");
             painter->drawPixmap(110,-340,50,50,clignabs);


    QPixmap clignwarning("/home/sahli/Bureau/Icones/voyants-_warning.jpg");
              painter->drawPixmap(-157,-340,50,50,clignwarning);

    QPixmap clignfeuxpos("/home/sahli/Bureau/Icones/voyant_feux_position.jpg");
          painter->drawPixmap(300,-160,40,40,clignfeuxpos);

    QPixmap clignfeuxcrois("/home/sahli/Bureau/Icones/voyant_feux_croisement.jpg");
           painter->drawPixmap(280,-190,40,40,clignfeuxcrois);

    QPixmap clignfeuxroute("/home/sahli/Bureau/Icones/voyant_feux_route.jpg");
           painter->drawPixmap(320,-130,40,40,clignfeuxroute);

}



