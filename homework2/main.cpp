#include "Car.h"
#include <vector>
#include <conio.h>

int main() {
    std::vector<Car> cars;
    
    // ��Ϣ¼��
    for (int i = 0; i < 10; ++i) {
        std::string carID = "cqusn" + std::to_string(i + 1000);
        Car car(carID);
        
        // ������Ϣ
        Chassis chassis;
        chassis.setID("dp" + std::to_string(i + 100));
        // �����������������������
        chassis.setChassisModel("SCOUT MINI");
        chassis.setWheelBase(451);
        chassis.setTrackWidth(490);
        chassis.setMinGroundClearance(115);
        chassis.setMinTurningRadius(0);
        chassis.setDriveType("��������");
        chassis.setMaxRange(10);
        car.setChassis(chassis); 
        
        // AGX �׼���Ϣ
        AGX agx;
        agx.setAgxModel("AGX Xavier");
        agx.setAI(32);
        agx.setCUDACores(512);
        agx.setTensorCores(64);
        agx.setMemory(32);
        agx.setStorage(32);

        // ˫Ŀ����ͷ��Ϣ
        Camera camera;
        camera.setCameraModel("RealSense D435i");
        camera.setCameraType("D430");
        camera.setRGBFrameResolution("1920x1080");
        camera.setRGBFrameRate(30);
        camera.setFOV("87x58");
        camera.setDepthFrameRate(90);
        car.setCamera(camera); 

        // ���߼����״���Ϣ
        Lidar lidar;
        lidar.setLidarModel("RS-Helios-16p");
        lidar.setChannelCount(16);
        lidar.setTestRange(100);
        lidar.setPowerConsumption(8);
        car.setLidar(lidar); 

        // 9����������Ϣ
        Gyro gyro;
        gyro.setGyroModel("CH110");
        gyro.setManufacturer("NXP");
        car.setGyro(gyro);

        // Һ����ʾ����Ϣ
        Display display;
        display.setDisplaySize(11.6);
        display.setDisplayModel("super");
        car.setDisplay(display); 

        // ���ģ����Ϣ
        Battery battery;
        battery.setExternalPower("24V");
        battery.setChargingTime(2);
        car.setBattery(battery);

        // ��̥��Ϣ
        Tire tire[4];
        for (int j = 0; j < 4; ++j) {
            tire[j].setModel(j % 2 == 0 ? "��·��" : "�����ķ��");
            tire[j].setSize("175mm");
            car.setTire(j, tire[j]);
        }

        // ѧ����Ϣ
        car.assignStudent("2023" + std::to_string(i), "ѧ��" + std::to_string(i + 1));
        
        cars.push_back(car);
    }

    // ��������С����Ϣ��ͬһ���ļ���
    std::ofstream outFile("ʢ������car_data2.txt");
    if (outFile.is_open()) {
        for (const auto& car : cars) {
            car.save(outFile); // ��С����Ϣ���浽�ļ�
        }
        outFile.close();
    }

    // ��ʾ��Ϣ
    int index = 0;
    char command;

    while (true) {
        cars[index].print();
        std::cout << "��'n'�鿴��һ������'p'�鿴��һ������'q'�˳���";
        std::cin >> command;

        if (command == 'n' && index < cars.size() - 1) {
            index++;
        } else if (command == 'p' && index > 0) {
            index--;
        } else if (command == 'q') { // �� 'q' �˳�
            break;
        }
    }

    return 0;
}
