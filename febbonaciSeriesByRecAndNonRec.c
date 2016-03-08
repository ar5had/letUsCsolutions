/*
 * febbonaciSeriesByRecAndNonRec.c
 * 
 * Copyright 2016 admin <arshad@arshad-PC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
void recFebbo(int i , int j, int n){
	
	
	if(n>2){
		
		int t= i+j;
		
		printf("%d ",t);
		
		i=j;
		
		j=t;
	
		recFebbo(i,j,n-1);
	}
	else
	return;
		
	
}
void febbo(int i,int j,int n){
	
	while(n!=2){
		int t;
		
		t=i+j;
		
		printf("%d ",t);
		
		i=j;
		
		j=t;
		
		n--;
		
		
	}//ends while loop
	
}




int main()
{
	
	int i=0,j=1,n;
	
	
	printf("This program prints the first n febbonaci nos!\n");
	
	printf("Enter the no n\n");
	
	scanf("%d",&n);
	printf("By logic of iteration:\n");
	
	printf("%d %d ",i,j);
	
	febbo(i,j,n);
	
	printf("\nBy logic of recursion:\n");
	
	printf("%d %d ",i,j);
	
	recFebbo(i,j,n);
	
	return 0;
}

