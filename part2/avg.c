/*
Shaon Islam
CS 2750	PA 3

*/


#include "sum.h"

double avg(float array[], double num)
{
	double thesum = sum(array,num);
	double average;
	average =(float)thesum/num;
	return(average);
}
