#include <iostream>

#include "caesar.h"
#include "funcs.h"
#include "vigenere.h"
#include "decrypt.h"
int main()
{
  std::cout << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << encryptCaesar("Hello, World!", 10) << std::endl;
  std::cout << encryptVigenere("Hello, World!","cake") << std::endl;
  std::cout << decryptCaesar("Jevpq, Wyvnd!", 10)<< std::endl;
  return 0; 
}

