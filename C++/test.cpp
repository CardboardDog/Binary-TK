#include "BinaryTK/Bin.h"
#include <iostream>
using namespace std;
int main(){
    int bin = Bin::Encode(65);
    int reg = Bin::Decode("000100");
    cout << "Encoded: " << bin;
    cout << "Decoded: " << reg;
}