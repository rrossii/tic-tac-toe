#include "game.hh"

Game::GameResult Game::Result() {
    int filled = 0;
    for (auto &row : board) {
        for (auto &col : row) {
            filled += col != 0;
        }
    }

    auto result = [](int x) {
        return (x == 1) ? GameResult::WonX : GameResult::WonO;
    };

    for (auto &row : board) {
        if (row[0] == row[1] && row[1] == row[2] && row[0]) {
            return result(row[0]);
        }
    }

    for (int col = 0; col < cols; col++) {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col] && board[0][col]) {
            return result(board[0][col]);
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0]) {
        return result(board[0][0]);
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2]) {
        return result(board[1][1]);
    }

    if (filled < 9) {
        return GameResult::InProgress;
    } else {
        return GameResult::Draw;
    }
}

bool Game::XMove() { // чи зараз хід Хрестика
    return xmove;
}

void Game::Move(int x, int y) {
    assert(board[x][y] == 0);
    // 1 -> X, 2 -> O
    board[x][y] = (xmove) ? 1 : 2;
    xmove = !xmove;
}
