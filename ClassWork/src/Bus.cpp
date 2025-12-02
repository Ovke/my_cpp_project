#include "../include/Bus.h"

void Bus::move(int &x, int &y, char h) {
    // 客车一次移动 1 格
    switch (h) {
        case 'N': y += 1; break;
        case 'S': y -= 1; break;
        case 'E': x += 1; break;
        case 'W': x -= 1; break;
    }
}
void Bus::turnLeft(int &x, int &y, char &h) {
    // 先前进 1 格
    move(x, y, h);
    // 再左转
    switch (h) {
        case 'N': h = 'W'; break;
        case 'W': h = 'S'; break;
        case 'S': h = 'E'; break;
        case 'E': h = 'N'; break;
    }
}
void Bus::turnRight(int &x, int &y, char &h) {
    // 先前进 1 格
    move(x, y, h);
    // 再右转
    switch (h) {
        case 'N': h = 'E'; break;
        case 'E': h = 'S'; break;
        case 'S': h = 'W'; break;
        case 'W': h = 'N'; break;
    }
}