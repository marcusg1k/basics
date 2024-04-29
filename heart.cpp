// marcusg1k
// hey future me this is for testing my push 

#include <iostream> 


int main() {
    int a, b, size = 20; // letters in the heart and the size of the heart
// you can change the letters in the int and the size for a bigger heart print
    for(a = size/2; a <= size; a = a+2) 
    {
        for (b = 1; b < size-a; b = b+2)
            std::cout << " "; // 
        for (b = 1; b <= a; b++)
            std::cout << "a"; 
        for (b = 1; b <= size-a; b++)
            std::cout << " "; 
        for (b = 1; b <= a-1; b++)
            std::cout << "a"; 
        std::cout << std::endl;  
    }
        for (a = size; a>= 0; a--){
            for (b = a; b < size; b++)
                std::cout << " "; 
            for(b = 1; b <= ((a*2) - 1); b++)
            std::cout << "b";
          std::cout << std::endl; 
        }
    }