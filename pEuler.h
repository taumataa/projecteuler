#include "pEuler.h"

int main(int argc, char **argv){
	unsigned int qNum = 0;
	double * answer = NULL;
	if(argc == 1){
		printf("Error: Requires a question number.\n");
		return 1;
	}else if(argc != 2){
		printf("Error: Requires only one question number.\n");
		return 1;
	}
	qNum = atoi(argv[1]);
	switch(qNum){
		case 1:
			answer = questionOne();
			break;
		case 2:
			answer = questionTwo();
			break;
		case 3:
			answer = questionThree();
			break;
		case 4:
			answer = questionFour();
			break;
		case 5:
			answer = questionFive();
			break;
		case 6:
			answer = questionSix();
			break;
		case 7:
			answer = questionSeven();
			break;
		case 8:
			answer = questionEight();
			break;		
		default:
			printf("Error: Question does not exist.\n");
			return 1;
	}
	printf("Answer: %f\n", answer[0]);
	return 0;
}
