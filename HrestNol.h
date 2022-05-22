#ifndef TIC_TAC_TOE_HRESTNOL_H
#define TIC_TAC_TOE_HRESTNOL_H

#include <QWidget>
#include <QPushButton>
#include "game.hh"

class HrestNol : public QWidget {
    Q_OBJECT
public:
    HrestNol(QWidget *qw = 0);

private:
    void CheckResult();
    Game game;

    QPushButton *qb00 = new QPushButton(this);
    QPushButton *qb01 = new QPushButton(this);
    QPushButton *qb02 = new QPushButton(this);
    QPushButton *qb10 = new QPushButton(this);
    QPushButton *qb11 = new QPushButton(this);
    QPushButton *qb12 = new QPushButton(this);
    QPushButton *qb20 = new QPushButton(this);
    QPushButton *qb21 = new QPushButton(this);
    QPushButton *qb22 = new QPushButton(this);
};


#endif //TIC_TAC_TOE_HRESTNOL_H
