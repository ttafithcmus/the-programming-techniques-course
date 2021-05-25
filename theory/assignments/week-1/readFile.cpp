#include "readFile.h"
#include <iostream>
#include <fstream>

using namespace std;

void readFile(){
    ifstream f("NongTrai.in");
    string content[100];
    int t = 0;

    if (f.is_open()){
        while (getline(f, content[t])){
            t++;
        }

        f.close();
    }

    for (int l=0; l<t; l++) {
        cout << content[l] << endl;
    }
}