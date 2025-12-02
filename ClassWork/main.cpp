#include <iostream>
#include <windows.h> // 需包含Windows头文件
#include <io.h>
#include <fcntl.h>
#include <string>
#include <tuple>
#include <limits>
#include <memory>   // 引入 unique_ptr 和 make_unique 所需的头文件

#include "include/Executor.h"
#include "include/SportCar.h"
#include "include/Bus.h"
#include "include/Vehicle.h"

int main() {
        // 设置控制台输出为 UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "===== 车辆指令执行器 =====" << std::endl;

    // --- 1. 用户选择车辆类型 ---
    int vehicleChoice;
    std::cout << "\n请选择车辆类型:" << std::endl;
    std::cout << "1. 跑车 (SportCar) - 移动快，转向灵活" << std::endl;
    std::cout << "2. 公交车 (Bus) - 移动慢，转向时会前进一步" << std::endl;
    std::cout << "请输入编号 (1 或 2): ";
    std::cin >> vehicleChoice;

    // 使用智能指针来管理对象生命周期，更安全
    std::unique_ptr<Vehicle> myVehicle;

    if (vehicleChoice == 1) {
        std::cout << "你选择了：跑车 (SportCar)" << std::endl;
        myVehicle = std::make_unique<SportCar>();
    } else if (vehicleChoice == 2) {
        std::cout << "你选择了：公交车 (Bus)" << std::endl;
        myVehicle = std::make_unique<Bus>();
    } else {
        std::cout << "输入无效，默认选择：跑车 (SportCar)" << std::endl;
        myVehicle = std::make_unique<SportCar>();
    }

    // --- 2. 用户输入指令串 ---
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 忽略之前输入的换行符
    std::string commands;
    std::cout << "\n请输入指令串 (例如: FMRMLTRBMMTRM):" << std::endl;
    std::cout << "指令说明: M(前进), L(左转), R(右转), F(切换加速), B(切换倒车), TR(特殊转向)" << std::endl;
    std::cout << "请输入: ";
    std::getline(std::cin, commands);

    // --- 3. 执行指令 ---
    std::cout << "\n正在执行指令: \"" << commands << "\"..." << std::endl;
    
    // 将智能指针管理的原始指针传递给 Executor
    Executor executor(myVehicle.get());
    executor.init(0, 0, 'N'); // 初始化位置(0,0)，朝向北(N)
    executor.run(commands);   // 执行用户输入的指令

    // --- 4. 输出最终结果 ---
    auto result = executor.query();
    int x = std::get<0>(result);
    int y = std::get<1>(result);
    char heading = std::get<2>(result);

    std::cout << "\n===== 执行完成 =====" << std::endl;
    std::cout << "最终位置: (" << x << ", " << y << ")" << std::endl;
    std::cout << "最终朝向: " << heading << std::endl;
    std::cout << "======================" << std::endl;

    return 0;
}