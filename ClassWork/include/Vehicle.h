#pragma once
#include <string>

class Vehicle {
public:
    virtual ~Vehicle() = default;

    virtual void move(int &x, int &y, char heading) = 0;
    virtual void turnLeft(int &x, int &y, char &heading) = 0;
    virtual void turnRight(int &x, int &y, char &heading) = 0;
};

// include/Vehicle.h 中定义枚举
enum class VehicleType {
    SPORT,
    BUS
};