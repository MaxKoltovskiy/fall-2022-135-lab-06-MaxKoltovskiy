#include <iostream>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string original, std::string keyword) 
{
    int keyIndex = 0;
    char text, key, shift;
    std::string result;

    for(int i = 0; i < original.size(); i++) {
        text = original[i];

        if(isalpha(text)) {

            key = keyword[keyIndex];
            shift = shiftChar(text, key-'a');
            keyIndex++;
            keyIndex %= keyword.size();
        }
        else {
            shift = text;
        }

        result += shift;
    }

    return result;
}