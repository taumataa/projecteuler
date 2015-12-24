#include "pEuler.h"

bool IsPrime(unsigned long n){
	if(n == 1 || n == 2){
		return true;
	}else if(n % 2 == 0){
		return false;
	}
	unsigned long i = 3;
	while(i*i <= n){
		if(n % i == 0){
			return false;
		}else{
			i += 2;
		}
	}
	return true;
}
		
