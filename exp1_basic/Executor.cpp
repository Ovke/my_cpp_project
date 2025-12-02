#include "Executor.h"
Executor::Executor() : x_(0), y_(0), heading_('N') {}

void Executor::init(int x, int y, char heading) {
    x_ = x;
    y_ = y;
    heading_ = heading;
}

void Executor::execute(const std::string& commands) {
    for (char cmd : commands) {
        if (cmd == 'M') move();
        else if (cmd == 'L') turnLeft();
        else if (cmd == 'R') turnRight();
    }
}

void Executor::move() {
    switch (heading_) {
    case 'N': y_++; break;
    case 'S': y_--; break;
    case 'E': x_++; break;
    case 'W': x_--; break;
    }
}

void Executor::turnLeft() {
    switch (heading_) {
    case 'N': heading_ = 'W'; break;
    case 'W': heading_ = 'S'; break;
    case 'S': heading_ = 'E'; break;
    case 'E': heading_ = 'N'; break;
    }
}

void Executor::turnRight() {
    switch (heading_) {
    case 'N': heading_ = 'E'; break;
    case 'E': heading_ = 'S'; break;
    case 'S': heading_ = 'W'; break;
    case 'W': heading_ = 'N'; break;
    }
}

int Executor::getX() const { return x_; }
int Executor::getY() const { return y_; }
char Executor::getHeading() const { return heading_; }