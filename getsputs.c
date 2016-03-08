/*
 * getsputs.c
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

void xputs(char*);

void xgets(char*);


int main()
{
	
	char str[50];
	
	puts("Enter your string");
	
	xgets(str);
	
	
	puts("Your string is ");
	
	xputs(str);
	
	return 0;
}

void xgets(char* s){
	
	int i;
	char ch;
	for(i=0;i<48;i++){
		ch=getchar();
		if(ch==10){
				
				*s='\0';
				
				break;
			
			
		}
		
		else if(ch=='\b'){
		
		printf("\b");break;
		
		i--;	
		s--;	
			
		}
		
		else{
			*s=ch;
			s++;
			
			}
		
	}
	
	
	
}// xgets ends.


void xputs(char* str){
	
	while(*str){
		
		putchar(*str);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		str++;
		
	}
	
	
}// xputs ends.
