/*
 * surve.c
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
#include <stdlib.h>

int main()
{
	int arr[10],count=1,choice1,choice2,choice3,i,erd=0,uct=0,rr=0;
	for(i=0;i<10;i++) 
		arr[i]=0;
	for(i=0;i<10;i++){
	printf("***************************%d************************************\n",count++);	
	puts("Enter the status: upper class , middle classs and lower class-->(0/1/2) \n");	
	
	scanf("%d",&choice1);	
		switch(choice1){
			
			case 0:
			
			arr[i]=arr[i] | 1;
			
			break;
			
			
			case 1:
			
			arr[i]=arr[i] | 2;
			
			break;
			
			case 2:
			
			arr[i]=arr[i] | 4;
			
			break;
			
			default:
			
				printf("invalid input");
				
				exit(1);
		}
		
	puts("Enter the preffered language: English, Hindi and Regional language-->(0/1/2) \n");	
	
	scanf("%d",&choice2);
		switch(choice2){
			
			case 0:
			
			arr[i]=arr[i] | 8;
			
			break;
			
			
			case 1:
			
			arr[i]=arr[i] | 16;
			
			break;
			
			case 2:
			
			arr[i]=arr[i] | 32;
			
			break;
			
			default:
			
				printf("invalid input");
				
				exit(1);
		}
		
	
		puts("Enter the category of paper: daily, supplement and tabloid-->(0/1/2) \n");	
	
	scanf("%d",&choice3);
		switch(choice3){
			
			case 0:
			
			arr[i]=arr[i] | 64;
			
			break;
			
			
			case 1:
			
			arr[i]=arr[i] | 128;
			
			break;
			
			case 2:
			
			arr[i]=arr[i] | 256;
			
			break;
			
			default:
			
				printf("invalid input");
				
				exit(1);
		}

		
	}// for loop ends
	
//finding no of daily english reader
	
	for (i=0;i<10;i++){
			
		if(  ((arr[i] & 8) == 8) && ((arr[i] & 64) ==64) ){
			
			erd++;
			}
		}
	
//finding no of upper class people who read tabloid 

	for (i=0;i<10;i++){
		
		if(  ((arr[i] & 1) == 1) && ((arr[i] & 256 )== 256) ){
			
			uct++;
		}
	}
//finding no of regional language reader	

	for (i=0;i<10;i++){
		if(  ((arr[i] & 32)== 32) ){
			
			rr++;
		
		}
	}
		
	printf("No of daily english reader are %d\n",erd);
	printf("No of upper class tabloid reader are %d\n",uct);
	printf("No of regional language reader are %d\n",rr);
	return 0;
}

