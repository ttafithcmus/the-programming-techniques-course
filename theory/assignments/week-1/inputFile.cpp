#include <iostream>
#include <fstream>
#include "struct.h"
#include "inputFile.h"
using namespace std;

void inputFile(Plantation &p) {
    ifstream f("NongTrai.in");
    int t = 0;

    if (f.is_open()) {
        while (f) {
            if (t == 0) {
                f >> p.N;
            }
            else {
                f >> p.trees[t - 1].location.x >> p.trees[t - 1].location.y >> p.trees[t - 1].type;
            }

            t++;
        }

        f.close();
    }
}