#include "ball.cpp"
#include "paddle.cpp"
#include "score.cpp"

constexpr int MAX_PLAYERS = 2;

struct GameState {
    float tick = 0.00f;
    Ball ball{5, 0, 0, 5, 5};
    Paddle paddles[MAX_PLAYERS] = {
        // {height, width, positionX, positionY, velocityY}
        {15, 5, -100, 0, 5},
        {15, 5, 100, 0, 5}
    };
    Score scores[MAX_PLAYERS];

    void reset() {
        ball.reset(5, 5);
        paddles[0].reset();
        paddles[1].reset();
    }
};
