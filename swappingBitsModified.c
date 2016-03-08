/*
 * swappingBits.c
 * 
 * Copyright 2016 admin <arshad@arshad-PC>
 * 
 * This program swaps bits according to user's input
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#define bv(x) (1<<x)
void swapBits1(int *no,int first,int second,int nbits);
void swapBits2(int *no,int first,int second,int nbits);
void showbits(int no);

int main()
{	int no,noCopy,first,second,nbits;
	puts("enter your no and 1st and 2nd bit pos and no of bits to get swapped");
	scanf("%d%d%d%d",&no,&first,&second,&nbits);noCopy=no;
	printf("Original no is %d and bits are ",no);showbits(no);puts("");
	swapBits1(&no,first,second,nbits);
	printf("Swapped no is %d and bits by swapping technique 1 are ",no);showbits(no);puts("");
	swapBits2(&noCopy,first,second,nbits);
	printf("Swapped no is %d and bits by swapping technique 2 are ",noCopy);showbits(noCopy);puts("");
	return 0;
}

void swapBits1(int *no,int first,int second,int nbits){
	int lb,ub;
	while(nbits>0){
		lb=(*no & bv((first)))==bv((first))?1:0;
		ub=(*no & bv((second)))==bv((second))?1:0;
		if(ub!=lb){
			*no=*no ^ bv(first);
			*no=*no ^ bv((second));
		}
		if( (first<second)  &&  (second<=15)){
			first++;
			second++;
			nbits--;
		}
		else
		{
			puts("Invalid value given");
			exit(1);
		}
	}//for ends
	
}//swapbits1 ends
void swapBits2(int *no,int first,int second,int nbits){
		
		//((1U<<nbits)-1) gives all starting nbits-bits set and other zero
		unsigned int s1=(*no>>first) & ((1U<<nbits)-1);
		unsigned int s2=(*no>>second) & ((1U<<nbits)-1);
		unsigned int xor=s1^s2;
		xor=(xor<<first) | (xor <<second);
		*no=*no^xor;

}//swapbits2 ends
void showbits(int no){
	int i;
	for(i=15;i>=0;i--){
		if( (no & bv(i))==bv(i))
		printf("1");
		else
		printf("0");
	}
		
		
	
}
