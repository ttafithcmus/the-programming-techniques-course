#include <iostream>
#include <fstream>
#include "outputFile.h"

using namespace std;

void outputFile(int s0, int s1, float cMin, float dMin) {
	ofstream f("NongTrai.out");
	
	f << s0 << ' ' << s1 << endl;
	f << cMin << endl;
	f << dMin << endl;

	f.close();

	cout << "Successful!" << endl;
	cout << "Check your file in the current direction!" << endl;
}