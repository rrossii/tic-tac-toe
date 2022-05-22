#include "HrestNol.h"
#include <QGridLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <qdebug.h>

HrestNol::HrestNol(QWidget *qw) : QWidget(qw) {

    qb00->setGeometry(0,  0, 50, 50);
    qb01->setGeometry(0, 1, 50, 50);
    qb02->setGeometry(0, 2, 50, 50);
    qb10->setGeometry(1, 0, 50, 50);
    qb11->setGeometry(1, 1, 50, 50);
    qb12->setGeometry(1, 2, 50, 50);
    qb20->setGeometry(2, 0, 50, 50);
    qb21->setGeometry(2, 1, 50, 50);
    qb22->setGeometry(2, 2, 50, 50);
    auto *layout1 = new QHBoxLayout(this);
    //auto *grid1 = new QGridLayout(this);

    // slot
    connect(qb00, &QPushButton::clicked, this, [&](){
        qb00->setText(QString::fromStdString(game.XMove() ? "X" : "O"));
        game.Move(0, 0);
        qb00->setEnabled(false);
        CheckResult();
    });
    connect(qb01, &QPushButton::clicked, this, [&](){
        qb01->setText(QString::fromStdString(game.XMove() ? "X" : "O"));
        game.Move(0, 1);
        qb01->setEnabled(false);
        CheckResult();
    });

    connect(qb02, &QPushButton::clicked, this, [&](){
        qb02->setText(QString::fromStdString(game.XMove() ? "X" : "O"));
        game.Move(0, 2);
        qb02->setEnabled(false);
        CheckResult();
    });
    connect(qb10, &QPushButton::clicked, this, [&](){
        qb10->setText(QString::fromStdString(game.XMove() ? "X" : "O"));
        game.Move(1, 0);
        qb10->setEnabled(false);
        CheckResult();
    });
    connect(qb11, &QPushButton::clicked, this, [&](){
        qb11->setText(QString::fromStdString(game.XMove() ? "X" : "O"));
        game.Move(1, 1);
        qb11->setEnabled(false);
        CheckResult();
    });

//
//    grid1->addWidget(qb00, 0, 0);
//    grid1->addWidget(qb01, 0, 1);
//    grid1->addWidget(qb02, 0, 2);
//    grid1->addWidget(qb10, 1, 0);
//    grid1->addWidget(qb11, 1, 1);
//    grid1->addWidget(qb12, 1, 2);
//    grid1->addWidget(qb20, 2, 0);
//    grid1->addWidget(qb21, 2, 1);
//    grid1->addWidget(qb22, 2, 2);
    layout1->addWidget(qb00);
    layout1->addWidget(qb01);
    layout1->addWidget(qb02);
    setLayout(layout1);
    //setLayout(grid1);
}

void HrestNol::CheckResult() {
    switch (game.Result()) {
        case Game::GameResult::Draw: {
            qDebug() << "Draw";
            break;
        }
        case Game::GameResult::WonX:{
            qDebug() << "WonX";
            break;
        }
        case Game::GameResult::WonY:{
            qDebug() << "WonY";
            break;
        }
    }
}
