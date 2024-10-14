#ifndef LIDAR_H
#define LIDAR_H

#include <iostream>
#include <fstream>
#include <string>

class Lidar{
    private:
        std::string lidarModel;
        int ChannelCount;
        int TestRange;
        int PowerConsumption;
    
    public:
        Lidar();
        void setLidarModel(const std::string& lidarModel);
        void setChannelCount(int ChannelCount);
        void setTestRange(int TestRange);
        void setPowerConsumption(int PowerConsumption);

        void print() const;
        void save(std::ofstream& outFile) const;
};

#endif