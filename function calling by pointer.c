/*
 * function calling by pointer.c
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

float fun1(int a,int b){
		return ( (a/b) );
}
float fun2(int a,int b){
		return ( (a/b) );
}
float fun3(int a,int b){
		return ( (a/b) );
}
float fun4(int a,int b){
		return ( (a/b) );
}

int main()
{	
	int i=0;float f;
	float (*ptr[4])(int,int);
	
	ptr[0]=fun1;ptr[1]=fun2;ptr[2]=fun3;ptr[3]=fun4;
	
	while(i<4){
			f =	ptr[i](100,i+1);
			printf("%f \n",f);
			i++;
	}
	
	return 0;
}

