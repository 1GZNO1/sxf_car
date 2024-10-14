#include "Car.h"
#include <vector>
#include <conio.h>

int main() {
    std::vector<Car> cars;
    
    // 信息录入
    for (int i = 0; i < 10; ++i) {
        std::string carID = "cqusn" + std::to_string(i + 1000);
        Car car(carID);
        
        // 底盘信息
        Chassis chassis;
        chassis.setID("dp" + std::to_string(i + 100));
        // 这里可以设置其他底盘属性
        chassis.setChassisModel("SCOUT MINI");
        chassis.setWheelBase(451);
        chassis.setTrackWidth(490);
        chassis.setMinGroundClearance(115);
        chassis.setMinTurningRadius(0);
        chassis.setDriveType("四轮四驱");
        chassis.setMaxRange(10);
        car.setChassis(chassis); 
        
        // AGX 套件信息
        AGX agx;
        agx.setAgxModel("AGX Xavier");
        agx.setAI(32);
        agx.setCUDACores(512);
        agx.setTensorCores(64);
        agx.setMemory(32);
        agx.setStorage(32);

        // 双目摄像头信息
        Camera camera;
        camera.setCameraModel("RealSense D435i");
        camera.setCameraType("D430");
        camera.setRGBFrameResolution("1920x1080");
        camera.setRGBFrameRate(30);
        camera.setFOV("87x58");
        camera.setDepthFrameRate(90);
        car.setCamera(camera); 

        // 多线激光雷达信息
        Lidar lidar;
        lidar.setLidarModel("RS-Helios-16p");
        lidar.setChannelCount(16);
        lidar.setTestRange(100);
        lidar.setPowerConsumption(8);
        car.setLidar(lidar); 

        // 9轴陀螺仪信息
        Gyro gyro;
        gyro.setGyroModel("CH110");
        gyro.setManufacturer("NXP");
        car.setGyro(gyro);

        // 液晶显示屏信息
        Display display;
        display.setDisplaySize(11.6);
        display.setDisplayModel("super");
        car.setDisplay(display); 

        // 电池模块信息
        Battery battery;
        battery.setExternalPower("24V");
        battery.setChargingTime(2);
        car.setBattery(battery);

        // 轮胎信息
        Tire tire[4];
        for (int j = 0; j < 4; ++j) {
            tire[j].setModel(j % 2 == 0 ? "公路轮" : "麦克纳姆轮");
            tire[j].setSize("175mm");
            car.setTire(j, tire[j]);
        }

        // 学生信息
        car.assignStudent("2023" + std::to_string(i), "学生" + std::to_string(i + 1));
        
        cars.push_back(car);
    }

    // 保存所有小车信息到同一个文件中
    std::ofstream outFile("盛夏霏的car_data2.txt");
    if (outFile.is_open()) {
        for (const auto& car : cars) {
            car.save(outFile); // 将小车信息保存到文件
        }
        outFile.close();
    }

    // 显示信息
    int index = 0;
    char command;

    while (true) {
        cars[index].print();
        std::cout << "按'n'查看下一辆，按'p'查看上一辆，按'q'退出：";
        std::cin >> command;

        if (command == 'n' && index < cars.size() - 1) {
            index++;
        } else if (command == 'p' && index > 0) {
            index--;
        } else if (command == 'q') { // 按 'q' 退出
            break;
        }
    }

    return 0;
}
