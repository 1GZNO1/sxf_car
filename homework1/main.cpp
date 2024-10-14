#include "Car.h"
#include "Student.h"
#include <conio.h>

using namespace std;

int main(){
    const int carCount = 10;
    vector<Car> cars;
    vector<Student> student;

    // ����ѧ����Ϣ
    for (int i = 0; i < carCount; ++i) {
        std::string carID = "cqusn" + std::to_string(i + 10000);  // �Զ�����
        Car car(carID);

        // ���õ�����Ϣ
        car.setChassis("dp" + std::to_string(i + 100));  // ���̱��ʾ��
        
        // ����AGX�׼���Ϣ
        car.setAGX("AGX Xavier"); // AGX�׼��ͺ�

        // ����˫Ŀ����ͷ��Ϣ
        car.setCamera("RealSense D435i"); // ����ͷ�ͺ�

        // ���ö��߼����״���Ϣ
        car.setLidar("RS-Helios-16p"); // �����״��ͺ�

        // ����9����������Ϣ
        car.setGyro("CH110"); // �������ͺ�

        // ����Һ����ʾ����Ϣ
        car.setDisplay("11.6 inches"); // ��ʾ���ߴ�

        // ���õ��ģ����Ϣ
        car.setBattery("24V/15Ah, 24V����, ���ʱ��2H"); // ��ز���

        // ����ѧ����Ϣ
        std::string studentID = "2023" + std::to_string(i);
        std::string studentName = "ѧ��" + std::to_string(i + 1);
        car.assignStudent(studentID, studentName);
        
        cars.push_back(car);
    }

    // ��������С����Ϣ��ͬһ���ļ�
    std::ofstream outFile("ʢ������car_data1.txt");
    if (outFile.is_open()) {
        for (const auto& car : cars) {
            car.save(outFile); // ��С����Ϣ���浽�ļ�
        }
        outFile.close();
    }

    // ��ȡ����ʾ��Ϣ
    int currentCarIndex = 0;
    char command;

    while (true) {
        cars[currentCarIndex].print();
        std::cout << "��'n'�鿴��һ������'p'�鿴��һ������'q'�˳���";
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