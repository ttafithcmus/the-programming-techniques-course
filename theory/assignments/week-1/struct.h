struct Coordinate {
	float x;
	float y;
};

struct Tree {
	Coordinate location;
	int type;
};

struct Plantation {
	int N;
	Tree trees[100];
};