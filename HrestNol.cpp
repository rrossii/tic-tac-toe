#include "HrestNol.h"
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>
#include <qdebug.h>

HrestNol::HrestNol(QWidget *qw) : QWidget(qw) {
    auto *grid1 = new QGridLayout(this);

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

    grid1->addWidget(qb00, 0, 0);
    grid1->addWidget(qb01, 0, 1);
    grid1->addWidget(qb02, 0, 2);
    grid1->addWidget(qb10, 1, 0);
    grid1->addWidget(qb11, 1, 1);
    grid1->addWidget(qb12, 1, 2);
    grid1->addWidget(qb20, 2, 0);
    grid1->addWidget(qb21, 2, 1);
    grid1->addWidget(qb22, 2, 2);
    setLayout(grid1);

}

void HrestNol::CheckResult() {
    switch (game.Result()) {
        case Game::GameResult::Draw: {
            QMessageBox msb;
            msb.setText("Draw");
            msb.show();
            msb.exec();
            break;
        }
        case Game::GameResult::WonX: {
            QMessageBox msb;
            msb.setText("X won!");
            msb.show();
            msb.exec();
            break;
        }
        case Game::GameResult::WonO: {
            QMessageBox msb;
            msb.setText("Y won!");
            msb.show();
            msb.exec();
            break;
        }
    }
}
//void HrestNol::PlayGame() {
//    qb00->setText(QString::fromStdString(game.XMove() ? "X" : "O"));
//    game.Move(0, 0);
//    qb00->setEnabled(false);
//    CheckResult();
//}
