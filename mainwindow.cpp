#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsView>
#include<QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
     scene->addItem(contour);
    scene->addItem(vit);
    scene->addItem(essence);
    scene->addItem(tour);
    scene->addItem(huile);
    scene->addItem(voy);

    ui->sliderVitesse->setValue(0);
    connect(ui->sliderVitesse, SIGNAL(actionTriggered(int)), this, SLOT(mouvVitesse()));
    connect(ui->sliderTour,SIGNAL(actionTriggered(int)),this, SLOT(mouvTour()));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete view;
    delete scene;
    delete vit;

}

void MainWindow::mascene()
{
    ui->graphicsView->setScene(scene);


    /*vit->vitesse = ui->sliderVitesse->value();
    tour->tpm=ui->sliderTour->value();
    scene->addItem(tour);
   scene->addItem(vit);*/
}
void MainWindow::mouvVitesse()
{

   vit->vitesse=ui->sliderVitesse->value();
    scene->update();
}
void MainWindow::mouvTour()
{
    tour->tpm=ui->sliderTour->value();
    scene->update();
}

