#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Camera{
    private:
        string cameraModel;
        string cameraType;
        string RGBFrameResolution;
        string RGBFrameRate;
        string FOV;
        string DepthFrameRate;
    
    public:
        Camera();
        void setCameraModel(const string& cameraModel);
        void setCameraType(const string& cameraType);
        void setRGBFrameResolution(const string& RGBFrameResolution);
        void setRGBFrameRate(int RGBFrameRate);
        void setFOV(const string& FOV);
        void setDepthFrameRate(int DepthFrameRate);

        void print() const;
        void save(ofstream& outFile) const;
};

#endif