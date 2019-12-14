#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "cadrantessence.h"
#include "cadranttour.h"
#include "cadrantvitesse.h"
#include "cadranthuile.h"
#include "cadrantcontour.h"
#include <QMainWindow>
#include<QDateTime>
#include "voyant.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsView *view = new QGraphicsView();
    QGraphicsScene *scene= new QGraphicsScene();
   cadrantessence *essence= new cadrantessence();
    cadranttour *tour = new cadranttour();
    cadrantvitesse *vit = new cadrantvitesse();
  cadranthuile *huile=new cadranthuile();
  cadrantcontour *contour=new cadrantcontour();
  voyant *voy=new voyant();





private:
    Ui::MainWindow *ui;
private slots :
    void mouvVitesse();
    void mouvTour();
    void mascene();
};

#endif // MAINWINDOW_H
