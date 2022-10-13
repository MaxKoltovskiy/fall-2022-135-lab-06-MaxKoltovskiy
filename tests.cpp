#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("Shift Char"){
    CHECK(shiftChar('W', 5) == 'B');
    CHECK(shiftChar('A',10) == 'K');
    CHECK(shiftChar('A',30) == 'E');
    CHECK(shiftChar('x', 10) == 'h');
    CHECK(shiftChar('b',5) == 'g');
    CHECK(shiftChar(' ',5) == ' ');
    CHECK(shiftChar(';',10) == ';');
}
TEST_CASE("Encrypt Caesar"){
    CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
    CHECK(encryptCaesar("H",2) == "J");
}
TEST_CASE("Encrypt Vigenere"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("ABCD","z") == "ZABC");
}
