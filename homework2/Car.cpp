#include "Car.h"

// ���캯��
Car::Car(const std::string& id) : carID(id), tires(4) {} // ��ʼ����ID����̥

// ���õ���
void Car::setChassis(const Chassis& chassis) {
    this->chassis = chassis;
}

// ����AGX�׼�
void Car::setAGX(const AGX& agx) {
    this->agx = agx;
}

// ��������ͷ
void Car::setCamera(const Camera& camera) {
    this->camera = camera;
}

// ���ü����״�
void Car::setLidar(const Lidar& lidar) {
    this->lidar = lidar;
}

// ����9��������
void Car::setGyro(const Gyro& gyro) {
    this->gyro = gyro;
}

// ����Һ����ʾ��
void Car::setDisplay(const Display& display) {
    this->display = display;
}

// ���õ��ģ��
void Car::setBattery(const Battery& battery) {
    this->battery = battery;
}

// ������̥
void Car::setTire(int index, const Tire& tire) {
    if (index >= 0 && index < tires.size()) {
        tires[index] = tire;
    }
}

// ѧ����Ϣ����
void Car::assignStudent(const std::string& studentID, const std::string& studentName) {
    student.setID(studentID);
    student.setName(studentName);
}

// ��ӡ��Ϣ
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

// ������Ϣ
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
    outFile << std::endl;  // ���һ�����з�
}
