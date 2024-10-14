#ifndef DISPLAT_H
#define DISPLAY_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Display{
    private:
        int displaySize;
        string displayModel;
    
    public:
        Display();
        void setDisplaySize(int displaySize);
        void setDisplayModel(const string& displayModel);
        void print() const;
        void save(ofstream& outFile) const;
};

#endif