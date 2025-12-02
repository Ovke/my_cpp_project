#ifndef EXECUTOR_H
#define EXECUTOR_H
#include <string>

class Executor {
public:
    Executor();

    // 初始化
    void init(int x, int y, char heading);

    // 执行指令（支持多指令）
    void execute(const std::string& commands);

    // 查询位置
    int getX() const;
    int getY() const;
    char getHeading() const;

private:
    int x_, y_;
    char heading_;

    void move();
    void turnLeft();
    void turnRight();
};

#endif