/*
 * getint.c
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
void getint(int*);
int main()
{
	int a ;
	
	puts("enter the integer");
	
	getint(&a);
	
	printf("%d ",a);
	
	return 0;
}
void getint(int* a){
	
	char no[10];
	
	gets(no);
	
	char* n=no;
	while(*n){
		
	if	(*n>='0' && *no<='9')
		{
			n++;
			
		}
	else{
		puts("Illeger input");
		gets(no);
		n=no;
		continue;
		}
	
	
	
	}
	
	sscanf(no,"%d",a);
	
	
	
	
}//getint ends here
