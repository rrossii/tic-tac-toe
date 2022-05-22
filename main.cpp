#include <QApplication>
#include <QPushButton>
#include "HrestNol.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    HrestNol game;
    game.setWindowTitle("Tic-tac-toe game");
    game.show();
    return QApplication::exec();
}
