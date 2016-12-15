#include <array>

class Memory
{
    public:
        Memory(int size); 

        int GetData(int address);
        void SetData(int address, int data); 
    private:
        vector<int> memory;
}