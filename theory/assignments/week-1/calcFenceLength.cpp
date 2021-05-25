#include "struct.h"
#include "calcFenceLength.h"

Coordinate findUpperLeft(Plantation p) {
	Coordinate point {};

	for (int i = 0; i < p.N; i++) {
		if (i == 0) {
			point.x = p.trees[i].location.x;
		}
		else if (point.x > p.trees[i].location.x) {
			point.x = p.trees[i].location.x;
		}
	}

	for (int j = 0; j < p.N; j++) {
		if (j == 0) {
			point.y = p.trees[j].location.y;
		}
		else if (point.y < p.trees[j].location.y) {
			point.y = p.trees[j].location.y;
		}
	}

	return point;
}

Coordinate findLowerRight(Plantation p) {
	Coordinate point {};

	for (int i = 0; i < p.N; i++) {
		if (i == 0) {
			point.x = p.trees[i].location.x;
		}
		else if (point.x < p.trees[i].location.x) {
			point.x = p.trees[i].location.x;
		}
	}

	for (int j = 0; j < p.N; j++) {
		if (j == 0) {
			point.y = p.trees[j].location.y;
		}
		else if (point.y > p.trees[j].location.y) {
			point.y = p.trees[j].location.y;
		}
	}

	return point;
}

float calcFenceLength(Plantation p) {
	Coordinate pUpperLeft{}, pLowerRight {};

	pUpperLeft = findUpperLeft(p);
	pLowerRight = findLowerRight(p);

	return ((pLowerRight.x - pUpperLeft.x) + (pUpperLeft.y - pLowerRight.y)) / 2;
}