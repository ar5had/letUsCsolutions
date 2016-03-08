/*
 * dobsStruct.c
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
typedef struct birth{
		unsigned date:5;
		unsigned month:4;
		unsigned year:12;
	
}dob;

dob dobs[10];

	void entry();
	void sort();
	void display();

int main()
{
	entry();
	sort();
	display();
	return 0;
}

void entry(){
	int i;
	for(i=0;i<10;i++){
			int input;
			while(1){
			int input;	
			puts("enter date");
			scanf("%d",&input);
			if(input<1 || input>31)
			printf("enter correct date \n");
			else{
			dobs[i].date=input;
			break;}			
			}
			while(1){
				
			puts("enter month");
			scanf("%d",&input);
			if(input<1 || input>12)
			printf("enter correct month \n");
			else{
			dobs[i].month=input;	
			break;}
			}
			while(1){
			
				
			puts("enter year");
			scanf("%d",&input);
			if(input<1950 || input>2000)
			printf("enter correct year \n");
			else{
			dobs[i].year=input;
			break;}
			}
	}
		
	
}

void sort(){
int i,j;
dob temp;

		for(i=0;i<9;i++){
			
				for(j=i;j<10;j++){
					
							if(dobs[i].year > dobs[j].year){
									temp=dobs[i];
									
									dobs[i]	= dobs[j];
									
									dobs[j]=temp;						
							}
					
				}
			
			
		}
	
	
}


void display(){
	
		int i;
		
		for(i=0;i<10;i++){
				
				printf("%d record \n date:%d month:%d year:%d \n",i+1,dobs[i].date,dobs[i].month,dobs[i].year);
			
			
		}
	
}
