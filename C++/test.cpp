#include "BinaryTK/Integer.h"
#include <iostream>
#include "BinaryTK/Character.h"
using namespace std;
int main(){
    string bina = "0000000001000001";
    string bin = Integer::IntToBin(65);
    int reg = Integer::BinToInt(bina);
    cout << "Encoded: " << bin << endl;
    cout << "Decoded: " << reg << endl;
    cout << "Character: " << Character::BinToChar(bin) << endl;
    cout << "Binary : " << Character::CharToBin('A') << endl;
}