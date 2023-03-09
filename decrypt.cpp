#include <iostream>
#include "caesar.h"
#include "vigenere.h"
std::string decryptCaesar(std::string ciphertext, int rshift){
    /*
    = Caesar =
    Enter shift    : 10
    Ciphertext     : Rovvy, Gybvn!
    Decrypted      : Hello, World!

    = Vigenere =
    Enter keyword  : cake
    Ciphertext     : Jevpq, Wyvnd!
    Decrypted      : Hello, World!
*/ 
    std::string plain;
    int sub = 26 - rshift;
    for(int i = 0; i < ciphertext.length(); i++){
        if(isalpha(ciphertext[i]) == true){
            plain += shiftChar(ciphertext[i],sub);
        }
        else{
            plain += ciphertext[i];
        }
    }
    return plain;
}
std::string decryptVigenere(std::string ciphertext, std::string keyword){
    std::string newtext = "";
    int c = 0;
    for(int i =0;i<ciphertext.length();i++){
        
    }
}