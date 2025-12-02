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

void Executor::execute(const std::string& cmds){
    for(size_t i=0;i<cmds.size();){
        if(cmds[i]=='F'){
            fast = !fast;
            i++;
        }
        else if(cmds.substr(i,2)=="TR"){
            if(fast){
                move(1);
                turnLeft();
                move(1);
                turnLeft();
            }else{
                turnLeft();
                move(1);
                turnLeft();
            }
            i+=2;
        }
        else{
            i++;
        }
    }
}

int Executor::getX() const { return x; }
int Executor::getY() const { return y; }
char Executor::getHeading() const { return heading; }