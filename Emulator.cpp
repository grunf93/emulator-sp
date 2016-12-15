#include "Emulator.h"

Emulator::Emulator(int size = MEMORY_SIZE, std::string inputPath)
{
    memory = Memory(size);

    inputFile.open(inputPath, std::ios::in);  
}