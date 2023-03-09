#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caeser.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("test"){
    CHECK(shiftChar('y',9) == 'h');
    CHECK(shiftChar('Y',7) == 'F');
    CHECK(encryptCaesar("Way to Go!", 5)=="Bfd yt Lt!");
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptVigenere("Jevpq, Wyvnd!","cake")== "Hello, World!");
    CHECK(decryptVigenere("Rm ekrs zc Yvfwfg!","fork")== "My name is Thomas!");
}

// TEST_CASE("Task C Test"){
//     CHECK(encryptVigenere("The quick brown fox jumps over the lazy dog.", "cake") == "Vho uwimo dryap fyb luwtu ofit tri najc foq.");   
// }

// TEST_CASE("Task D Tests"){
//     CHECK(decryptCaesar("Sgd pthbj aqnvm enw itlor nudq sgd kzyx cnf.", 25) == "The quick brown fox jumps over the lazy dog.");
//     CHECK(decryptVigenere("Vho uwimo dryap fyb luwtu ofit tri najc foq.", "cake") == "The quick brown fox jumps over the lazy dog.");
// }