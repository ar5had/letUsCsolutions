/*
 * febboSting.c
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
int main()
{
	
	char secondLast[50]="b",last[50]="a",str[50];
	
	int i=1;
	
	printf("%s %s ",last,secondLast);
	
	while(i<=5){
		
		
		strcpy(str,secondLast);
		strcat(str,last);
		printf("%s ",str);

		

		strcpy(last,secondLast);
		strcpy(secondLast,str);
		
		i++;
		}
	
	return 0;
}

