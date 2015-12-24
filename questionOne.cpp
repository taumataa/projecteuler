#include "pEuler.h"

double * questionOne(){
	double * answer = (double *) malloc (ANUM);
/*	Allocate double * based on number of answers.	*/
	unsigned int * multiples = (unsigned int *) malloc (MAXNUM1);
/*	Allocate int * 600 as there is no more than
	(1000/3 + 1000/5) = 533 multiples.	*/
	unsigned int i, j, m3, m5;
/*	Declare iteration ints, i and j, and
	temp multiple ints, m3 and m5.	*/
	for(i = 1, j = 0; i < MAXNUM1; i++){
		m3 = i * 3;
		m5 = i * 5;
		if(m3 < 1000){
/*	If m3 is under 1000, add to int * multiples.	*/ 
			multiples[j] = m3;
			j++;
		}
		if(m5 < 1000){
/*	If m5 is under 1000 and not also a multiple
	of 3, add to int * multiples.	*/
			if(m5%3 != 0){
				multiples[j] = m5;
				j++;
			}
		}
	}
	for(i = 0; i < j; i++){
		answer[0] += (double)multiples[i];
/*	Sum int * multiples.	*/
	}
	return answer;
}
	
