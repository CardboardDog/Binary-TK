#include "Bin.h"
using namespace std;
const string key = "       	                          ! #$%&()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ ";
#ifndef Char
#define Char
    char GetChar(string Binary){
        return (char)(key[Bin::Decode(Binary)]);
    }
    string GetBin(char character){
        string result = "";
        for(int i=0;i<key.length();i++){
            if((char)key[i] == character){
                result = Bin::Encode(i);
            }
        }
        return result;
    }
#endif