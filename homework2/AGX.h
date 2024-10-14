#ifndef AGX_H
#define AGX_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class AGX{
    private:
        string agxModel;
        int AI;
        int CUDACores;
        int TensorCores;
        int memory;
        int storage; 

    public:
        AGX();
        void setAgxModel(const string& agxModel);
        void setAI(int AI);
        void setCUDACores(int cores);
        void setTensorCores(int cores);
        void setMemory(int memory);
        void setStorage(int storage);

        void print() const;
        void save(ofstream& outFile) const;
};

#endif