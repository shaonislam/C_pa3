/*
Shaon Islam
CS 2750	PA 3

*/

double max(float array[], double num){

        double maximum;
        maximum = array[0];

        int i;

        for (i = 0; i < num; i++)
        {
                if (array[i] >  maximum){
                        maximum = array[i];}
        }

	return (maximum);

}


