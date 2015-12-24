#include "pEuler.h"

double * questionSeven(){
	double * answer = (double *) malloc (ANUM);
/*	Allocate double * based on number of answers.	*/
	unsigned long n, i;
	n = 0;
	i = 1;
	while(n < 10001){
		if(IsPrime(i)){
			n++;
		}
		if(n!= 10001){
			i+=2;
		}
	}
	answer[0] = i;
	return answer;
}
