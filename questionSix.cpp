#include "pEuler.h"

double * questionSix(){
	double * answer = (double *) malloc (ANUM);
/*	Allocate double * based on number of answers.	*/
	unsigned long i, sum_sq, sq_sum, diff;
	for(i = 0, sq_sum = 0, sum_sq = 0; i <= 100; i++){
		sum_sq += i*i;
		sq_sum += i;
	}
	sq_sum = sq_sum*sq_sum;
	diff = sq_sum - sum_sq;
	answer[0] = (double)diff;
	return answer;
}
