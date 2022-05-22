#ifndef TIC_TAC_TOE_GAME_HH
#define TIC_TAC_TOE_GAME_HH

#include <vector>
#include <cassert>

class Game {
public:
    enum class GameResult {
        InProgress,
        Draw,
        WonX,
        WonY
    };

    void Move(int x, int y);

    bool XMove();

    GameResult Result();

    Game() = default;

private:
    bool xmove = true;
    int rows = 3;
    int cols = 3;
    std::vector<std::vector<int>> board = std::vector<std::vector<int>>(rows, std::vector<int>(cols, 0));
};


#endif //TIC_TAC_TOE_GAME_HH
