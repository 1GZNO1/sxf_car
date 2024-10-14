#include "AGX.h"
using namespace std;

AGX::AGX() {}

void AGX::setAgxModel(const string& agxModel) {
    this->agxModel = agxModel;
}

void AGX::setAI(int AI) { this->AI = AI; }
void AGX::setCUDACores(int cores) { this->CUDACores = cores; }
void AGX::setTensorCores(int cores) { this->TensorCores = cores; }
void AGX::setMemory(int memory) { this->memory = memory; }
void AGX::setStorage(int storage) { this->storage = storage; }

void AGX::print() const {
    cout << "AGX Model: " << agxModel << endl;
    cout << "AI Performance: " << AI << " TOPS" << endl;
    cout << "CUDA Cores: " << CUDACores << endl;
    cout << "Tensor Cores: " << TensorCores << endl;
    cout << "Memory: " << memory << " GB" << endl;
    cout << "Storage: " << storage << " GB" << endl;
}

void AGX::save(ofstream& outFile) const {
        outFile << "AGX Model: " << agxModel << endl;
        outFile << "AI Performance: " << AI << " TOPS" << endl;
        outFile << "CUDA Cores: " << CUDACores << endl;
        outFile << "Tensor Cores: " << TensorCores << endl;
        outFile << "Memory: " << memory << " GB" << endl;
        outFile << "Storage: " << storage << " GB" << endl;
}
