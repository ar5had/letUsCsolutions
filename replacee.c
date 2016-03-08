/*
 * replacee.c
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
	char str1[20],str2[20];

	puts("enter the string that you wnt to get replaced and then the string by which you want it to get replaced");
	gets(str1);
	gets(str2);
	
	char* str[]={
			"We will teach you how to...",
			"Move a mountain",
			"Level a building",
			"Erase the past",
			"Make a million",
			"...all through C!"
		
		};
	
	
	
	return 0;
}

