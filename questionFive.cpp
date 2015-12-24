#include "pEuler.h"

double * questionFive(){
	double * answer = (double *) malloc (ANUM);
/*	Allocate double * based on number of answers.	*/
	int i, j;
	int success;
	j = 3;
	while(true){
		success = 1;
		for(i = 2; i <= 20; i++){
			if(j % i != 0){
/*	If there is a number from 1 to 20 that has a remainder,
	then break and start again from j+1.	*/
				success = 0;
				break;
			}
		}
		if(success == 1){
/*	If completed without breaking from for loop, return j	*/
			answer[0] = j;
			return answer;
		} else {
			j++;
		}
	}
}
			
		
