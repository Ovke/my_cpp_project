#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {
public:
    void move(int &x, int &y, char heading) override;
    void turnLeft(int &x, int &y, char &heading) override;
    void turnRight(int &x, int &y, char &heading) override;
};