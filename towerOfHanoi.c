#include <stdio.h>

void moveTower(int n, char source[15], char destination[15] , char temporary[15]){
	
	
	
	if( n > 0){
		
		moveTower(n-1,source,temporary,destination);
		printf("Step -Move ring from %s to %s \n",source,destination);
		moveTower(n-1,temporary,destination,source);
		
		
	}	

	
}



int main(){

	int rings;
	
	printf(" This program tells solution of tower of hanoi for n-rings \n");
	printf(" Enter the n-rings: ");
	scanf("%d",&rings);
	if(rings<1){
		printf("Bad Value of rings inputed by user!");
		exit(12);
	}
	moveTower(rings,"source","destination","temporary");

	return 0;
}
