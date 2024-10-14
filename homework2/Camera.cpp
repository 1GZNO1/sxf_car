#include "Camera.h"
using namespace std;

Camera::Camera() {}

void Camera::setCameraModel(const string& cameraModel) { this->cameraModel = cameraModel; }
void Camera::setCameraType(const string& cameraType) { this->cameraType = cameraType; }
void Camera::setRGBFrameResolution(const string& RGBFrameResolution) { this->RGBFrameResolution = RGBFrameResolution; }
void Camera::setRGBFrameRate(int RGBFrameRate) { this->RGBFrameRate = RGBFrameRate; }
void Camera::setFOV(const string& FOV) { this->FOV = FOV; }
void Camera::setDepthFrameRate(int DepthFrameRate) { this->DepthFrameRate = DepthFrameRate; }

void Camera::print() const {
    cout << "Camera Model: " << cameraModel << endl;
    cout << "Camera Type: " << cameraType << endl;
    cout << "RGB_Frame_Resolution: " << RGBFrameResolution << "x" << endl;
    cout << "RGB_Frame_Rate: " << RGBFrameRate << "fps" << endl;
    cout << "FOV: " << FOV << endl;
    cout << "Depth_Frame_Rate: " << DepthFrameRate << "fps" << endl;
}

void Camera::save(std::ofstream& outFile) const {
        outFile << "Camera Model: " << cameraModel << endl;
        outFile << "Camera Type: " << cameraType << endl;
        outFile << "RGB_Frame_Resolution: " << RGBFrameResolution << "x" << endl;
        outFile << "RGB_Frame_Rate: " << RGBFrameRate << "fps" << endl;
        outFile << "FOV: " << FOV << endl;
        outFile << "Depth_Frame_Rate: " << DepthFrameRate << "fps" << endl;
}
