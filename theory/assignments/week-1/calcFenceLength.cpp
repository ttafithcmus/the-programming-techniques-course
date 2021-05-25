#include "header/struct.h"

double findUpperLeft(Plantation p){
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

}

double findLowerRight(Plantation p){
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
}

// float calcFenceLength(Plantation p){
// 	Coordinate p;

//     p = findUpperLeft(p);
// 	p.y = findLowerRight(p);

// 	return (x1 + x2) / 2;
// }