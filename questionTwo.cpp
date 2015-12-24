#include "pEuler.h"

double * questionTwo(){
	double * answer = (double *) malloc (ANUM);
/*	Allocate double * based on number of answers.	*/
	int oVal, nVal, tVal;
/*	Declare ints oVal, nVal and tVal	*/
	for(oVal = 1, nVal = 1; nVal < MAXVAL2;){
		tVal = nVal + oVal;
		oVal = nVal;
		nVal = tVal;
/*	Fibonacci sequence	*/
		if(nVal%2 == 0){
			answer[0] += nVal;
/*	If nVal is even, add to answer	*/
		}
	}
	return answer;
}
		
		
