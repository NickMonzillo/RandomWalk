#include <iostream>
using namespace std;

class RandomWalk
{
private:
	int steps;
	float up_prob;
	int up_value;
	int down_value;
	int start_value;
public:
	RandomWalk::RandomWalk(int steps, float up_prob,int up_value, int down_value, int start_value);
	int RandomWalk::random();
	int RandomWalk::simulate();
};