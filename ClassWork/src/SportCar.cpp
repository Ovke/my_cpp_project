#include "../include/SportCar.h"

void SportCar::move(int &x, int &y, char h) {
    // 跑车：一次移动 2 格
    switch (h) {
        case 'N': y += 2; break;
        case 'S': y -= 2; break;
        case 'E': x += 2; break;
        case 'W': x -= 2; break;
    }
}
void SportCar::turnLeft(int &x, int &y, char &h) {
    // 先左转
    switch (h) {
        case 'N': h = 'W'; break;
        case 'W': h = 'S'; break;
        case 'S': h = 'E'; break;
        case 'E': h = 'N'; break;
    }
    // 前进 1 格
    switch (h) {
        case 'N': y += 1; break;
        case 'S': y -= 1; break;
        case 'E': x += 1; break;
        case 'W': x -= 1; break;
    }
}
void SportCar::turnRight(int &x, int &y, char &h) {
    // 先右转
    switch (h) {
        case 'N': h = 'E'; break;
        case 'E': h = 'S'; break;
        case 'S': h = 'W'; break;
        case 'W': h = 'N'; break;
    }
    // 前进 1 格
    switch (h) {
        case 'N': y += 1; break;
        case 'S': y -= 1; break;
        case 'E': x += 1; break;
        case 'W': x -= 1; break;
    }
}