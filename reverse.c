/*
 * reverse.c
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
void reverseString(char* s);
char *str[]={
	
		"to ere is human..",
		"i am going to die",
		"noone knows the truth"
	
	};

int main()
{
	puts("ths pro reverses the string");
	int i;
	for(i=0;i<3;i++)
		printf("%s \n",str[i]);
	for(i=0;i<3;i++){
		reverseString(str[i]);
		printf("%s \n",str[i]);
	}
	
	return 0;
}

void reverseString(char* s){
	
	int i,len=strlen(s);
	
	
	
	char* t,temp;
		
	t=s+len-1;
	
		for(i=1;i<=len/2;i++){
		
		temp=*s;
		*s=*t;
		*t=temp;
		
		t--;
		s++;
		
		}
	
}
