#include "Car.h"

// 构造函数
Car::Car(const std::string& id) : carID(id), tires(4) {} // 初始化车ID和轮胎

// 设置底盘
void Car::setChassis(const Chassis& chassis) {
    this->chassis = chassis;
}

// 设置AGX套件
void Car::setAGX(const AGX& agx) {
    this->agx = agx;
}

// 设置摄像头
void Car::setCamera(const Camera& camera) {
    this->camera = camera;
}

// 设置激光雷达
void Car::setLidar(const Lidar& lidar) {
    this->lidar = lidar;
}

// 设置9轴陀螺仪
void Car::setGyro(const Gyro& gyro) {
    this->gyro = gyro;
}

// 设置液晶显示屏
void Car::setDisplay(const Display& display) {
    this->display = display;
}

// 设置电池模块
void Car::setBattery(const Battery& battery) {
    this->battery = battery;
}

// 设置轮胎
void Car::setTire(int index, const Tire& tire) {
    if (index >= 0 && index < tires.size()) {
        tires[index] = tire;
    }
}

// 学生信息分配
void Car::assignStudent(const std::string& studentID, const std::string& studentName) {
    student.setID(studentID);
    student.setName(studentName);
}

// 打印信息
void Car::print() const {
    std::cout << "Car ID: " << carID << std::endl;
    chassis.print();
    agx.print();
    camera.print();
    lidar.print();
    gyro.print();
    display.print();
    battery.print();
    for (const auto& tire : tires) {
        tire.print();
    }
    student.print();
}

// 保存信息
void Car::save(std::ofstream& outFile) const {
    outFile << "Car ID: " << carID << std::endl;
    chassis.save(outFile);
    agx.save(outFile);
    camera.save(outFile);
    lidar.save(outFile);
    gyro.save(outFile);
    display.save(outFile);
    battery.save(outFile);
    for (const auto& tire : tires) {
        tire.save(outFile);
    }
    student.save(outFile);
    outFile << std::endl;  // 添加一个换行符
}
