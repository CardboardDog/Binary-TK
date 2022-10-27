#include "Integer.h"
using namespace std;
const string key = "       	                          ! #$%&()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ ";
#ifndef Character
#define Character
    char BinToChar(string Binary){
        return (char)(key[Integer::BinToInt(Binary)]);
    }
    string CharToBin(char character){
        string result = "";
        for(int i=0;i<key.length();i++){
            if((char)key[i] == character){
                result = Integer::IntToBin(i);
            }
        }
        return result;
    }
#endif