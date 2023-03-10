#include <iostream>
#include <string>
#include <cctype>
#include "caeser.h"
#include "funcs.h"
#include "vigenere.h"
#include "decrypt.h"
int main()
{
  std::cout << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << encryptCaesar("Hello, World!", 10) << std::endl;
  std::cout << encryptVigenere("Hello, World!","cake") << std::endl;
  std::cout << encryptVigenere("My name is Thomas!","fork") << std::endl;
  std::cout << decryptCaesar("Bfd yt Lt!", 5)<< std::endl;
  std::cout << decryptCaesar("Rovvy, Gybvn!", 10)<< std::endl;
  std::cout << decryptVigenere("Jevpq, Wyvnd!","cake") << std::endl;
  std::cout << decryptVigenere("Rm ekrs zc Yvfwfg!","fork") << std::endl;
  return 0; 
}

