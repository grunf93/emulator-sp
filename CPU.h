#include <vector>

const int REG_COUNT = 16; 

class CPU
{
public:
    CPU(); 
private:
    vector<int> regs; 
    int pc; 
    int lr; 
    int sp; 
}