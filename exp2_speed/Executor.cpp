#include "Executor.h"

Executor::Executor(int x,int y,char h):x(x),y(y),heading(h){}

void Executor::move(int step){
    for(int i=0;i<step;i++){
        if(heading=='N') y++;
        if(heading=='S') y--;
        if(heading=='E') x++;
        if(heading=='W') x--;
    }
}

void Executor::turnLeft(){
    if(heading=='N') heading='W';
    else if(heading=='W') heading='S';
    else if(heading=='S') heading='E';
    else if(heading=='E') heading='N';
}

void Executor::turnRight(){
    if(heading=='N') heading='E';
    else if(heading=='E') heading='S';
    else if(heading=='S') heading='W';
    else if(heading=='W') heading='N';
}

void Executor::execute(const std::string& cmds){
    for(char c:cmds){
        if(c=='F') fast=!fast;
        else if(c=='M') move(fast?2:1);
        else if(c=='L'){
            if(fast) move(1);
            turnLeft();
        }
        else if(c=='R'){
            if(fast) move(1);
            turnRight();
        }
    }
}

int Executor::getX() const {return x;}
int Executor::getY() const {return y;}
char Executor::getHeading() const {return heading;}