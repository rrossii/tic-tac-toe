#include <QApplication>
#include <QPushButton>
#include "HrestNol.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    HrestNol game;
    game.setWindowTitle("Tic-tac-toe game");
    game.show();
    //TODO: fix problem with closing program
    return QApplication::exec();
}
