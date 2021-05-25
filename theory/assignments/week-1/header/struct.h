struct Plantation{
    int N;
	Tree trees[100];
};

struct Coordinate{
	double x;
	double y;
};

struct Tree{
	Coordinate location;
	int type;
};