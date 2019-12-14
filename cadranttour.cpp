#include "cadranttour.h"
#include "cadrantvitesse.h"
#include <QGraphicsItem>
#include <QObject>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QRectF>
#include <QtMath>
#include <QtDebug>
#include <QPointF>



cadranttour::cadranttour(QGraphicsItem *parent)
{

}
QRectF cadranttour::boundingRect() const
{
    QRectF rectf(-800,-500,1600,1000);
    return rectf;
}

void cadranttour::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

  float pi = 3.14159265359;
  painter->setRenderHint(QPainter::Antialiasing);
  QPen pen;
 {

      {
          for (int i=0;i<=40;i+=1)
          {
           if (i%5==0){
              pen.setWidthF(50);
              painter->setPen(QPen(QBrush("white"), 25, Qt::SolidLine, Qt::FlatCap));
              QRect rectTrait(-520,-330,400,400);
              painter->drawArc(rectTrait,(200-i*3)*16,3*3);
              }
           else{
               painter->setPen(QPen(QBrush("white"), 5, Qt::SolidLine, Qt::FlatCap));
               QRect rectTrait(-520,-330,400,400);
               painter->drawArc(rectTrait,(200-i*3)*16,5*3);}
      }}

      int j=0;
      for (float i=200*pi/180; i>=77*pi/180; i-=14.25*pi/180)
      {
          if(j<6){
          painter->setFont(QFont("arial", 15, -1,false));
          painter->setPen(QPen(QBrush("white") , 40, Qt::SolidLine));
          painter->drawText(qCos(i)*175-320,-qSin(i)*175-130,QString("%1").arg(j));
          j+=1;
          }
          else{

              painter->setFont(QFont("arial", 15, -1,false));
              painter->setPen(QPen(QBrush("red") , 40, Qt::SolidLine));
              painter->drawText(qCos(i)*175-320,-qSin(i)*175-130,QString("%1").arg(j));
              j+=1;
              }
       }
     painter->setPen(QPen(QBrush("red") , 15, Qt::SolidLine));
      QRect rectt1 (-520, -330, 400,400);
      painter->drawArc(rectt1, 85*16, 6*16);
      painter->setPen(QPen(QBrush("red") , 15, Qt::SolidLine));
       QRect rectt2 (-520, -330, 400,400);
       painter->drawArc(rectt2, 100*16, 6*16);
   }



//création de l'aiguille tour minute

     {
      painter->setPen(QPen( Qt::white , 6, Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin));
      painter->drawLine(-360, -160, -460, -80);}



       {QPen pen;
       pen.setColor("white");
       QBrush brush(Qt::SolidPattern);
       brush.setColor("white");
       painter->setPen(pen);
       painter->setBrush(brush);
       QRect recticone (-370, -180, 30, 30);
       painter->drawEllipse(recticone);}
  }



/*   double xCentre=-280.0;
    double yCentre=-110.0;
    double angStartAig = 260;
    double c=cos((angStartAig-tpm)*pi/180);
    double s=sin((angStartAig-tpm)*pi/180);
    double xpos=xCentre+200*c;
    double ypos=yCentre-200*s;

 * QPointF pts[3]= {
    QPointF(xCentre-7*cos((angStartAig-tpm*5)*pi/180),yCentre+7*sin((angStartAig-tpm*5)*pi/180)),
    QPointF(xpos, ypos),
    QPointF(xCentre+7*cos((angStartAig-tpm*5)*pi/180),yCentre-7*sin((angStartAig-tpm*5)*pi/180))
};
 painter->drawConvexPolygon(pts, 3);
 }*/
