#include <iostream>

int main() {
    
    int a = 5;  
    int b = 3;  

    
    int andResult = a & b;  
    std::cout << "a & b = " << andResult << std::endl;

   
    int orResult = a | b;  
    std::cout << "a | b = " << orResult << std::endl;

    
    int xorResult = a ^ b;  
    std::cout << "a ^ b = " << xorResult << std::endl;

    
    int notResult = ~a;  
    std::cout << "~a = " << notResult << std::endl;

 
    int leftShiftResult = a << 1;  
    std::cout << "a << 1 = " << leftShiftResult << std::endl;

    
    int rightShiftResult = a >> 1;  
    std::cout << "a >> 1 = " << rightShiftResult << std::endl;

    return 0;
}
