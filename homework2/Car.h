#ifndef CAR_H
#define CAR_H

#include "Chassis.h"
#include "AGX.h"
#include "Camera.h"
#include "Lidar.h"
#include "Gyro.h"
#include "Display.h"
#include "Battery.h"
#include "Tire.h"
#include "Student.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

class Car {
private:
    std::string carID;
    Chassis chassis;
    AGX agx;
    Camera camera;
    Lidar lidar;
    Gyro gyro;
    Display display;
    Battery battery;
    std::vector<Tire> tires;
    Student student;

public:
    Car(const std::string& id); // 4个轮胎

    // 设置底盘
    void setChassis(const Chassis& chassis);

    // 设置AGX套件
    void setAGX(const AGX& agx);

    // 设置摄像头
    void setCamera(const Camera& camera);

    // 设置激光雷达
    void setLidar(const Lidar& lidar);

    // 设置9轴陀螺仪
    void setGyro(const Gyro& gyro);

    // 设置液晶显示屏
    void setDisplay(const Display& display);

    // 设置电池模块
    void setBattery(const Battery& battery);

    // 设置轮胎
    void setTire(int index, const Tire& tire);

    // 学生信息分配
    void assignStudent(const std::string& studentID, const std::string& studentName);

    // 打印信息
    void print() const;

    // 保存信息
    void save(std::ofstream& outFile) const;

};

#endif // CAR_H
