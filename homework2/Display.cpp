#include "Display.h"
using namespace std;

Display::Display() {}

void Display::setDisplaySize(int displaySize){ this->displaySize = displaySize; }
void Display::setDisplayModel(const string& displayModel) { this->displayModel = displayModel; }

void Display::print() const {
    cout << "Display Size: " << displaySize << endl;
    cout << "Display Model: " << displayModel << endl;
}

void Display::save(std::ofstream& outFile) const {
        outFile << "Display Size: " << displaySize << endl;
        outFile << "Display Model: " << displayModel << endl;
}
