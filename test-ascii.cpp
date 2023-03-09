#include <iostream>
#include <string>

#include "funcs.h"

void ascii(std::string str){
    for(int i =0; i < str.length();i++){
        std::cout << str[i] << " " << (int)str[i] << std::endl;
    }
}
int main()
{   
    ascii("Cat :3 Dog");
    return 0;
}
