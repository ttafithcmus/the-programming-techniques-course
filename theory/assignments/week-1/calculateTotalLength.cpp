#include <cmath>
#include <iostream>
#include "struct.h"
#include "calculateTotalLength.h"

using namespace std;

float calculateTotalLength(Plantation p) {
	Coordinate pump {};
	pump = findPump(p);
	float totalLength = 0;

	for (int i = 0; i < p.N; i++) {
		totalLength += distance(pump, p.trees[i].location);
	}

	return totalLength;
}

Coordinate findPump(Plantation p) {
	Coordinate pump {};

	for (int i = 0; i < p.N; i++) {
		pump.x += p.trees[i].location.x;

		if (i == p.N - 1) {
			pump.x /= p.N;
		}
	}

	for (int j = 0; j < p.N; j++) {
		pump.y += p.trees[j].location.y;

		if (j == p.N - 1) {
			pump.y /= p.N;
		}
	}

	return pump;
}

float distance(Coordinate p, Coordinate q) {
	return sqrt(pow((p.x - q.x), 2) + pow((p.y - q.y), 2));
}