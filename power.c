#include<stdio.h>

int poww(int b,int p){
	
	int result;
	
	if(p >= 1 ){
		result = b* poww(b,p-1);
		
		return result;
	}
	
	else
	return 1;
	
}

int main(){
	
	int b,p;
	
	printf("Enter the base and power respectively : ");
	
	scanf("%d%d",&b,&p);
	int result= poww(b,p);
	
	printf(" the result is %d",result);
	
	return 0;
	
	
}
