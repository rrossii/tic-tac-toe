#include "HrestNol.h"
#include <QFrame>
#include <QGridLayout>
#include <QPushButton>

HrestNol::HrestNol(QWidget *qw) : QWidget(qw) {
    QFrame *fr1 = new QFrame(this);
//    QFrame *fr2 = new QFrame(this);
//    QFrame *fr3 = new QFrame(this);
//    QFrame *fr4 = new QFrame(this);
//    QFrame *fr5 = new QFrame(this);
//    QFrame *fr6 = new QFrame(this);
//    QFrame *fr7 = new QFrame(this);
//    QFrame *fr8 = new QFrame(this);
//    QFrame *fr9 = new QFrame(this);
//

//    fr3->setFrameStyle(QFrame::Box);
//    fr4->setFrameStyle(QFrame::Box);
//    fr5->setFrameStyle(QFrame::Box);
//    fr6->setFrameStyle(QFrame::Box);
//    fr7->setFrameStyle(QFrame::Box);
//    fr8->setFrameStyle(QFrame::Box);
//    fr9->setFrameStyle(QFrame::Box);
//
//    QGridLayout *grid1 = new QGridLayout(this);
//    grid1->addWidget(fr2, 0, 1);
//    grid1->addWidget(fr3, 0, 2);
//    grid1->addWidget(fr4, 1, 0);
//    grid1->addWidget(fr5, 1, 1);
//    grid1->addWidget(fr6, 1, 2);
//    grid1->addWidget(fr7, 2, 0);
//    grid1->addWidget(fr8, 2, 1);
//    grid1->addWidget(fr9, 2, 2);
    QPushButton *qb1 = new QPushButton(this);
    QPushButton *qb2 = new QPushButton(this);
    QPushButton *qb3 = new QPushButton(this);
    QPushButton *qb4 = new QPushButton(this);
    QPushButton *qb5 = new QPushButton(this);
    QPushButton *qb6 = new QPushButton(this);
    QPushButton *qb7 = new QPushButton(this);
    QPushButton *qb8 = new QPushButton(this);
    QPushButton *qb9 = new QPushButton(this);


    qb1->resize(50, 50);
    qb2->resize(50, 50);
    qb3->resize(50, 50);
    QGridLayout *grid1 = new QGridLayout(this);

    grid1->addWidget(qb1, 0, 0);
    grid1->addWidget(qb2, 0, 1);
    grid1->addWidget(qb3, 0, 2);
    grid1->addWidget(qb4, 1, 0);
    grid1->addWidget(qb5, 1, 1);
    grid1->addWidget(qb6, 1, 2);
    grid1->addWidget(qb7, 2, 0);
    grid1->addWidget(qb8, 2, 1);
    grid1->addWidget(qb9, 2, 2);

    setLayout(grid1);
}
