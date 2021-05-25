#include <iostream>
using namespace std;

#define MAX_LENGTH 100

struct Coordinate{
	double x;
	double y;
};

struct Plantation{
    int N;
	Tree trees[MAX_LENGTH];
};

struct Tree{
	Coordinate location;
	int type;
};

int countTrees(Plantation p, int type){
	int count = 0;

	for (int i=0; i<p.N; i++){
		if (p.trees[i].type == type){
			count++;
		}
	}
	
	return count;
}

int countCoffeeTrees(Plantation p){
	return countTrees(p, 0);
}

int countTeaTrees(Plantation p){
	return countTrees(p, 1);
}

Coordinate findUpperLeft(Plantation p){
	Coordinate point;

	for (int i=0; i<p.N; i++){
		if (i==0){
			point.x = p.trees[i].location.x;
		}
		else if (point.x > p.trees[i].location.x){
			point.x = p.trees[i].location.x;
		}
	}

	for (int j=0; j<p.N; j++){
		if (j==0){
			point.y = p.trees[j].location.y;
		}
		else if (point.y < p.trees[j].location.y){
			point.y = p.trees[j].location.y;
		}
	}

	return point;
}

Coordinate findLowerRight(Plantation p){
	Coordinate point;

	for (int i=0; i<p.N; i++){
		if (i==0){
			point.x = p.trees[i].location.x;
		}
		else if (point.x < p.trees[i].location.x){
			point.x = p.trees[i].location.x;
		}
	}

	for (int j=0; j<p.N; j++){
		if (j==0){
			point.y = p.trees[j].location.y;
		}
		else if (point.y > p.trees[j].location.y){
			point.y = p.trees[j].location.y;
		}
	}

	return point;
}

float calcFenceLength(Plantation p){
	Coordinate p;

    p = findUpperLeft(p);
	p.y = findLowerRight(p);

	return (x1 + x2) / 2;
}

int main(){
	int n;
	cin >> n; 
	Plantation p;
	calcFenceLength(p);
}