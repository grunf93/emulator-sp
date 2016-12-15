#include <string> 
#include <fstream> 
#include "CPU.h"
#include "Memory.h"

constexpr int MEMORY_SIZE = 1024;

class Emulator
{
    public:
       Emulator(int size = MEMORY_SIZE, std::string inputPath); 
       
       void DoCycle(); 
       void Emulate(); 

       void FillMemory(); 
    private:
        CPU cpu;
        Memory memory;
        
        std::ifstream inputFile; 
}