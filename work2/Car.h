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
    Car(const std::string& id); // 4����̥

    // ���õ���
    void setChassis(const Chassis& chassis);

    // ����AGX�׼�
    void setAGX(const AGX& agx);

    // ��������ͷ
    void setCamera(const Camera& camera);

    // ���ü����״�
    void setLidar(const Lidar& lidar);

    // ����9��������
    void setGyro(const Gyro& gyro);

    // ����Һ����ʾ��
    void setDisplay(const Display& display);

    // ���õ��ģ��
    void setBattery(const Battery& battery);

    // ������̥
    void setTire(int index, const Tire& tire);

    // ѧ����Ϣ����
    void assignStudent(const std::string& studentID, const std::string& studentName);

    // ��ӡ��Ϣ
    void print() const;

    // ������Ϣ
    void save(std::ofstream& outFile) const;

};

#endif // CAR_H
