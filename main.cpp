#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

int main()
{

  std::cout<< "encryptCaesar(""Way to Go!"", 5) == " << encryptCaesar("Way to Go!", 5)<< "\n";

  std::cout<< "encryptVigenere(""PlainText"", ""key"") == " << encryptVigenere("PlainText", "key")<< "\n";
  
}
