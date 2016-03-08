/*
 * compare.c
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
#define COMPARE(x,y,z) ( x>y && x>z ? x : ( y>x && y>z ? y:z )  )

int main()
{	
	float a,b,c;
	printf("Enter the three nos you want to compare");
	scanf("%f%f%f",&a,&b,&c);
	
	printf("And the biggest no is %.02f",COMPARE(a,b,c));
	return 0;
}

