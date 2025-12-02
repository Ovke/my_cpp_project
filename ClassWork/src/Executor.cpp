#include "../include/Executor.h"
Executor::Executor(Vehicle* v) : vehicle(v) {}

void Executor::init(int x0, int y0, char h0) {
    x = x0;
    y = y0;
    heading = h0;
    fast = false;
    back = false;
}
void Executor::run(const std::string &cmds) {
    for (size_t i = 0; i < cmds.size(); i++) {
        if (cmds[i] == 'T' && i + 1 < cmds.size() && cmds[i + 1] == 'R') {
            execute('T');
            i++;
        } else {
            execute(cmds[i]);
        }
    }
}
void Executor::execute(char cmd) {
    switch (cmd) {
    case 'M':
        forward();
        break;
    case 'L':
        turnLeft();
        break;
    case 'R':
        turnRight();
        break;
    case 'F':
        fast = !fast;
        break;
    case 'B':
        back = !back;
        break;

    case 'T': {
        bool oldBack = back;
        back = false;
        // 掉头 = 左转两次
        vehicle->turnLeft(x, y, heading);
        vehicle->turnLeft(x, y, heading);
        // 掉头后只走一步
        vehicle->move(x, y, heading);

        back = oldBack;
        break;
    }

    default:
        break;
    }
}
void Executor::forward() {
    // B + F
    if (back && fast) {
        backward();
        backward();
        return;
    }
    // B
    if (back) {
        backward();
        return;
    }
    // F
    if (fast) {
        vehicle->move(x, y, heading);
        vehicle->move(x, y, heading);
        return;
    }
    // 普通前进
    vehicle->move(x, y, heading);
}

void Executor::backward() {
    switch (heading) {
    case 'N': y -= 1; break;
    case 'S': y += 1; break;
    case 'E': x -= 1; break;
    case 'W': x += 1; break;
    }
}

void Executor::turnLeft() {
    if (back) {
        // 倒车状态：左转 = 顺时针
        switch (heading) {
        case 'N': heading = 'E'; break;
        case 'E': heading = 'S'; break;
        case 'S': heading = 'W'; break;
        case 'W': heading = 'N'; break;
        }
    } else {
        if (fast) {
            vehicle->move(x, y, heading);
        }
        vehicle->turnLeft(x, y, heading);
    }
}

void Executor::turnRight() {
    if (back) {
        // 倒车状态：右转 = 逆时针
        switch (heading) {
        case 'N': heading = 'W'; break;
        case 'W': heading = 'S'; break;
        case 'S': heading = 'E'; break;
        case 'E': heading = 'N'; break;
        }
    } else {
        if (fast) {
            vehicle->move(x, y, heading);
        }
        vehicle->turnRight(x, y, heading);
    }
}

std::tuple<int, int, char> Executor::query() const {
    return {x, y, heading};
}