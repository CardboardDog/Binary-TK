#include "BinaryTK/Bin.h"
#include <iostream>
#include "BinaryTK/Char.h"
using namespace std;
int main(){
    string bina = "0000000001000001";
    string bin = Bin::Encode(65);
    int reg = Bin::Decode(bina);
    cout << "Encoded: " << bin << endl;
    cout << "Decoded: " << reg << endl;
    cout << "Character: " << Char::GetChar(bin) << endl;
    cout << "Binary : " << Char::GetBin('A') << endl;
}