#pragma once
#include <string>

class Executor {
private:
    int x,y;
    char heading;
    bool fast=false;
    bool back=false;

    void move(int step,bool forward=true);
    void turnLeft();
    void turnRight();

public:
    Executor(int x=0,int y=0,char h='N');
    void execute(const std::string& cmds);
    int getX() const;
    int getY() const;
    char getHeading() const;
};