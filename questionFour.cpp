#include "pEuler.h"

double * questionFour(){
	double * answer = (double *) malloc (ANUM);
/*	Allocate double * based on number of answers.	*/
	unsigned int i, j, k, revk, tempk, palindrome, n;
	for(i = 999; i > 0; i--){
		for(j = 999; j > 0; j--){
			k = i*j;
			revk = 0;
			tempk = k;
			while(tempk){
				revk = revk * 10;
				revk = revk + tempk%10;
				tempk = tempk/10;
			}
			if(revk == k && palindrome < k){
				palindrome = k;
			}
		}
	}
	answer[0] = palindrome;
	return answer;
}
				
			
			

