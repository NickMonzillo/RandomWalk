#include <iostream>
#include <time.h>
using namespace std;


int random(float up_prob, int up_value, int down_value)
{
	//Returns the up_value with a probability of up_prob.
	//Returns the down_value with a probability of (1-up_prob)
	double val = ((double) rand() / (RAND_MAX));
	if(val <= up_prob)
	{
		return up_value;
	}
	else
	{
		return down_value;
	}
}

int simulate(int steps, float up_prob, int up_value, int down_value, int start_value)
{
	//Simulates a random walk with the specified up value and down value.
	//Up value occurs with a probility of up_prob
	//Down value occurs with a probability of (1-up_prob)
	int max_value = 0;
	int min_value = 0;
	for(int i = 0;i < steps; i++)
	{
		start_value += random(up_prob,up_value,down_value);
		if(start_value > max_value)
		{
			max_value = start_value;
		}
		if(start_value < min_value)
		{
			min_value = start_value;
		}
	}
	cout<< "Minimum value was: " << min_value << '\n';
	cout<< "Maximum value was: " << max_value << '\n';
	return start_value; 
}


int main()
{
	srand(time(NULL));
	(void)rand();
	putpixel(
	cout<< simulate(10000000,0.5,1,-1,0) << endl;
	system("pause");
}
