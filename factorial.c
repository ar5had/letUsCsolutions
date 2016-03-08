#include <stdio.h>

float factorial(int n){
	float fact;
	if(n>1)
	fact= n * factorial(n-1);	
	else 
	return 1;
	return fact;

}

int main(){
	int n;
	printf(" Enter the number? \n");
	scanf(" %d",&n);
	
	float fact=factorial(n);
	
	printf("The factorial of given no is : %.0f",fact);
	
	return 0;
	
}

