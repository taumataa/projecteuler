#include "pEuler.h"

double * questionThree(){
	double * answer = (double *) malloc (ANUM);
/*	Allocate double * based on number of answers.	*/
	unsigned long n = QVAL3;
	unsigned long factor = 1;
	unsigned long i = 2;
	while(i*i <= n){
		if(n % i == 0){
			n = n / i;
			factor = i;
		} else { 
			i = (i == 2) ? 3 : i + 2;
/*	Increase iterator by 2 once at 3 to ensure only
	odd numbers calculated.	*/
		}
	}
	if(n > factor){
		factor = n;
	}
	answer[0] = (double)factor;
	return answer;
}
