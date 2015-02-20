#include <iostream>
#include <time.h>
#include "RandomWalk.h"
using namespace std;

int num_steps;
float up_p;
int up_v;
int down_v;
int start_v;
RandomWalk::RandomWalk(int steps, float up_prob,int up_value, int down_value, int start_value)
{
	num_steps = steps;
	up_p = up_prob;
	up_v = up_value;
	down_v = down_value;
	start_v = start_value;
}

int RandomWalk::random()
{
	//Returns the up_value with a probability of up_prob.
	//Returns the down_value with a probability of (1-up_prob)
	double val = ((double) rand() / (RAND_MAX));
	if(val <= up_p)
	{
		return up_v;
	}
	else
	{
		return down_v;
	}
}

int RandomWalk::simulate()
{
//Simulates a random walk with the specified up value and down value.
//Up value occurs with a probility of up_prob
//Down value occurs with a probability of (1-up_prob)
	int max_value = 0;
	int min_value = 0;
	for(int i = 0;i < num_steps; i++)
	{
		start_v += random();
		if(start_v > max_value)
		{
			max_value = start_v;
		}
		if(start_v < min_value)
		{
			min_value = start_v;
		}
	}
	cout<< "Minimum value was: " << min_value << '\n';
	cout<< "Maximum value was: " << max_value << '\n';
	cout<< "Final Value: \n";
	return start_v; 
}