/*************************************************
*		Operating System's Lab Assignment 02
*		done by : Mubeen Ghauri 
*				  P17-6107
**************************************************/

#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

	clock_t start, _end;
	double total_time;

	start = clock();

	int steps = atoi(argv[1]);
	printf("Steps recieved = %d\n", steps);

	int STEPS = steps; // Number of Steps 
	int i, count = 0;
	double x, y, z, pi;


	for (i = 0; i <= STEPS; i++) {
		x = rand()/(double)RAND_MAX; 
		y = rand()/(double)RAND_MAX; 
		z = x*x + y*y;
		if (z <= 1) count++;
	}

	pi = (double)count/STEPS*4; 
	printf("N = %d\t", STEPS);
	printf("Pi = %.20f\n", pi);

	_end = clock();

	total_time = ((double) (_end - start)) / CLOCK_TAI;
	printf("Total time of Execution -> %f\n", total_time );

}