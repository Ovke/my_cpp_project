#include "Executor.h"

Executor::Executor(int x,int y,char h):x(x),y(y),heading(h){}

void Executor::move(int step,bool forward){
    for(int i=0;i<step;i++){
        int dir = forward?1:-1;
        if(heading=='N') y+=dir;
        if(heading=='S') y-=dir;
        if(heading=='E') x+=dir;
        if(heading=='W') x-=dir;
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
        else if(c=='B') back=!back;
        else if(c=='M') move(fast?2:1,!back);
        else if(c=='L'){
            if(back){
                if(fast) move(1,false);
                turnRight();
            }else{
                if(fast) move(1,true);
                turnLeft();
            }
        }
        else if(c=='R'){
            if(back){
                if(fast) move(1,false);
                turnLeft();
            }else{
                if(fast) move(1,true);
                turnRight();
            }
        }
    }
}

int Executor::getX() const{return x;}
int Executor::getY() const{return y;}
char Executor::getHeading() const{return heading;}