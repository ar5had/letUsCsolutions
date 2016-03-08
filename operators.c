/*
 * operators.c
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

int main(int argc, char *argv[])
{
	
	int a,b,i,j;
	char *result;
	char *op[8]={"+","-","*","/","%",">","<","="};
	
	for(i=0;i<8;i++){
			if(strcmp(op[i],argv[3])==0)
			{	j=i;
				break;
			}
			
			
	}
	
	
	
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	
	switch(j){
		
			case 0:
				printf("Result is %d",a+b);
			
			break;
			
			case 1:
				printf("Result is %d",a-b);
			
			break;
			
			case 2:
				printf("Result is %d",a*b);
			
			break;
			
			case 3:
				printf("Result is %d",a/b);
			
			break;
			
			case 4:
				printf("Result is %d",a%b);
			
			break;
			
			case 5:
			
				result=(a>b)?"true":"false";
				printf("Result is %s",result);
			
			break;
			
			case 6:
			
				result=(a<b)?"true":"false";
				printf("Result is %s",result);
			
			break;
			
			case 7:
			
				result=(a==b)?"true":"false";
				printf("Result is %s",result);
			
			break;
			
			
			default:
			
			printf("Invalid operator given");
			
			break;
		
	}
	
	return 0;
}

