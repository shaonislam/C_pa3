/*
Shaon Islam
CS 2750	PA 3

*/


double min(float array[], double num){

	double minumum = array[0];
	int i;
	
	for (i = 0; i < num; i++)
	{
		if (array[i] <= minumum){
			minumum = array[i];}
	}

	return (minumum);

}
