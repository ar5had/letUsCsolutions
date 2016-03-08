/*
 * swappingBits.c
 * 
 * Copyright 2016 admin <arshad@arshad-PC>
 * 
 * This program swaps last and first bits and continue to do so until all bits are swapped.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#define bv(x) (1<<x)
void swapBits(int* no);
void showbits1(int no);
void showbits2(int no);
int main()
{	int no;
	puts("enter your no ,be ready to get its bit swapped top-bottom");
	scanf("%d",&no);
	printf("Original no is %d and bits are ",no);showbits(no);puts("");
	swapBits1(&no);
	printf("Swapped no is %d and bits are ",no);showbits(no);puts("");
	swapBits2(&no);
	printf("Swapped no is %d and bits are ",no);showbits(no);puts("");
	return 0;
}

void swapBits1(int *no){
	int i,lb,ub;
	for(i=0;i<=7;i++){
		lb=(*no & bv(i))==bv(i)?1:0;
		ub=(*no & bv((15-i)))==bv((15-i))?1:0;
		if(ub!=lb){
			*no=*no ^ bv(i);
			*no=*no ^ bv((15-i));
		}//if ends
	}//for ends
	
}
void swapBits1(int *no){
	int i,lb,ub;
	for(i=0;i<=7;i++){
		lb=(*no & bv(i))==bv(i)?1:0;
		ub=(*no & bv((15-i)))==bv((15-i))?1:0;
		
	}//for ends
	
}
void showbits(int no){
	int i;
	for(i=15;i>=0;i--){
		if( (no & bv(i))==bv(i))
		printf("1");
		else
		printf("0");
	}
		
		
	
}
