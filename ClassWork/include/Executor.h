#pragma once
#include "Vehicle.h"
#include <tuple>

class Executor {
private:
    Vehicle* vehicle;
    int x = 0, y = 0;
    char heading = 'N';
    bool fast = false;
    bool back = false;

public:
    Executor(Vehicle* v);

    void init(int x0, int y0, char h0);
    void run(const std::string& commands);
    // 单独执行指令
    void execute(char cmd);
    // 查询结果
    std::tuple<int, int, char> query() const;

private:
    void forward();
    void backward();
    void turnLeft();
    void turnRight();
};