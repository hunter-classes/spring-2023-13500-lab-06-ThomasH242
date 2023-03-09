#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword){
    std::string newtext = "";
    int c = 0;
    for(int i = 0; i < plaintext.length();i++){
        if(c == keyword.length()){
            c = 0;
        }
        newtext += shiftChar(plaintext[i],keyword[c]- 97);

        if((plaintext[i] >= 97 && plaintext[i]<=122) || (plaintext[i] >= 65 && plaintext[i]<=90)){
            c++;
        }
    }
    return newtext;
}
