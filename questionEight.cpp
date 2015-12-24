#include "pEuler.h"

double * questionEight(){
	double * answer = (double *) malloc (ANUM);
/*	Allocate double * based on number of answers.	*/
	FILE *qEightData;
	unsigned long max, number, size;
	int i, j;
	qEightData = fopen("questionEightData.txt", "r");
	if(qEightData == NULL){
		printf("Error: Could not open question data.\n");
		answer[0] = 0;
		return answer;
	} else {
		fseek(qEightData, 0 ,SEEK_END);
		size = ftell (qEightData);
		rewind(qEightData);
	}
	int * numbers = (int *) malloc ((int)size);
	for(i = 0; i < size; i++){
		number = (getc(qEightData) - '0');
		if(number < 0 || number > 9){
			break;
		}
		numbers[i] = number;
	}
	for(i = 0; i < (size-13); i++){
		for(j = 0; j < 13; j++){
			number = number * numbers[j+i];
		}
		if(number > max){
			max = number;
		}
	}
	answer[0] = (double)max;
	return answer;
}
