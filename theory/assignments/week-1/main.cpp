#include "struct.h"
#include "inputFile.h"
#include "outputFile.h"
#include "countTrees.h"
#include "calcFenceLength.h"
#include "calculateTotalLength.h"

int main() {
	struct Plantation p;
	int s0 = 0;
	int s1 = 0;
	float cMin = 0;
	float dMin = 0;

	// Input file NongTrai.in
	inputFile(p);

	// Processing
	s0 = countCoffeeTrees(p);
	s1 = countTeaTrees(p);
	cMin = calcFenceLength(p);
	dMin = calculateTotalLength(p);

	// Output file NongTrai.out
	outputFile(s0, s1, cMin, dMin);

	return 0;

}