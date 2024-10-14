#include "Car.h"
#include "Student.h"
#include <conio.h>

using namespace std;

int main(){
    const int carCount = 10;
    vector<Car> cars;
    vector<Student> student;

    // 输入学生信息
    for (int i = 0; i < carCount; ++i) {
        std::string carID = "cqusn" + std::to_string(i + 10000);  // 自定义编号
        Car car(carID);

        // 设置底盘信息
        car.setChassis("dp" + std::to_string(i + 100));  // 底盘编号示例
        
        // 设置AGX套件信息
        car.setAGX("AGX Xavier"); // AGX套件型号

        // 设置双目摄像头信息
        car.setCamera("RealSense D435i"); // 摄像头型号

        // 设置多线激光雷达信息
        car.setLidar("RS-Helios-16p"); // 激光雷达型号

        // 设置9轴陀螺仪信息
        car.setGyro("CH110"); // 陀螺仪型号

        // 设置液晶显示屏信息
        car.setDisplay("11.6 inches"); // 显示屏尺寸

        // 设置电池模块信息
        car.setBattery("24V/15Ah, 24V供电, 充电时长2H"); // 电池参数

        // 分配学生信息
        std::string studentID = "2023" + std::to_string(i);
        std::string studentName = "学生" + std::to_string(i + 1);
        car.assignStudent(studentID, studentName);
        
        cars.push_back(car);
    }

    // 保存所有小车信息到同一个文件
    std::ofstream outFile("盛夏霏的car_data1.txt");
    if (outFile.is_open()) {
        for (const auto& car : cars) {
            car.save(outFile); // 将小车信息保存到文件
        }
        outFile.close();
    }

    // 读取并显示信息
    int currentCarIndex = 0;
    char command;

    while (true) {
        cars[currentCarIndex].print();
        std::cout << "按'n'查看下一辆，按'p'查看上一辆，按'q'退出：";
        std::cin >> command;

        if (command == 'n' && currentCarIndex < carCount - 1) {
            ++currentCarIndex;
        } else if (command == 'p' && currentCarIndex > 0) {
            --currentCarIndex;
        } else if (command == 'q') {
            break;
        }
    }

    return 0;
}