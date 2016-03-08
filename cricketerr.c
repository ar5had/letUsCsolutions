/*
 * cricketerr.c
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
#include <string.h>
#include <stdlib.h>
void display();
void input();
void sort();
int compare(const void* ,const void*);

struct cric{
	int noOfTest;
	float avgRun;
	int run;
	char name[30];
	
	}cricketer[3];

int main()
{
	
	input();
	display();
	sort();
	display();
	return 0;
}

void input(){
	int i=0;
	while(i<3){
	
		puts("Enter the details of cricketer");
		
		puts("Enter the name of player");
		
		scanf("%s",cricketer[i].name);
		
		puts("Enter the no of tests played by him");
		
		scanf("%d",&cricketer[i].noOfTest);
		
		puts("Enter the total run made by player");
		
		scanf("%d",&cricketer[i].run);
		
		cricketer[i].avgRun= (float)cricketer[i].run/ cricketer[i].noOfTest;
		
		i++;
	}
	
}//ends input function

void display(){
	
	int i=0;
	
	while(i<3){
		
		puts(cricketer[i].name);
		
		printf("Runs=%d",cricketer[i].run);
		
		printf("No of tests=%d",cricketer[i].noOfTest);
		
		printf("Average runs=%f",cricketer[i].avgRun);
		
		i++;
	}
	
}

void sort(){
		
		qsort((struct crick*)cricketer,3,sizeof(cricketer[0]),compare);
	
	
	
}


int compare(const void *f ,const void *ff){
	
	return(  ( (struct cric*)f)->avgRun  - ( (struct cric*)ff)->avgRun  );
	
}
