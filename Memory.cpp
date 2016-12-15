#include "Memory.h"
#include "MemoryException.h"

Memory::Memory(int size)
{
    memory = std::vector<int>(size); 
}

int Memory::GetData(int address)
{
    try
    {
        if(address > memory.size() || address < 0)
        {
            throw MemoryException(); 
        }else
        {
            return memory[address]; 
        }
    }
    catch(Exception e)
    {
        e.PrintError(); 
    }
    return -1; 
}

void Memory::SetData(int address, int data)
{
    try
    {
        if(address > memory.size() || address < 0)
        {
            throw MemoryException(); 
        }
        //if(data > numberOfBits?)
        else
        {
            memory[address] = data; 
        }
    }
    catch(Exception e)
    {
        e.PrintError(); 
    }
} 