/*
Shaon Islam
CS 2750	PA 3

*/

#include<stdio.h>
#include<math.h>

#define N 100000



int main()

{
	int a,b,i;	
	int prime[N];

	for( a = 0; a < N; a++)
	{
		prime[a] = 1;
	}

	prime[0] = 0, prime[1] = 0;

	for(a = 2; a < sqrt(N); a++)
	{
		for(b = a*a; b < N; b = b + a)
		{
			prime[b] = 0;
		}

	}

	for(i = 0; i < N; i++)
	{
		if (prime[i] == 1){	
		printf("%d\n",i);}
	}

}
