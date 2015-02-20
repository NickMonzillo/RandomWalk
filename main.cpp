#include <iostream>
#include <time.h>
#include "RandomWalk.h"
using namespace std;

int main()
{
	srand(time(NULL));
	(void)rand();
	RandomWalk walk = RandomWalk(10000000,0.5,1,-1,0);
	cout<< walk.simulate() << endl;
	system("pause");
}
