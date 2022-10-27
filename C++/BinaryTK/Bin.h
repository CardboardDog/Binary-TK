#include <iostream>
#include <bitset>
using namespace std;
#ifndef Bin
#define Bin
    int Decode(string Dat){
        string newdat = string(Dat.rbegin(),Dat.rend());
        //cout << newdat << endl;
        int multiplyer = 1;
        int res = 0;
        for(int i=0; i<newdat.length(); i++){
            res += (newdat[i] == '0')? (0) : (multiplyer);
            multiplyer *= 2;
            //cout << multiplyer << endl;
        }
        //cout << newdat;
        return res;
    }
    string Encode(int Dat){
        std::bitset<16>newdat(Dat);
        //std::cout << newdat << "\n";
        return newdat.to_string();
    }
#endif