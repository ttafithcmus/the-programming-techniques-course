#include "header/struct.h"

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