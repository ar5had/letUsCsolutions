/*
 * preproceeessorprog2.c
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
#define SI(p,r,t) (p*r*t/100)
#define AMT(SI,p) (SI + p) 
int main()
{	int p;float r,t;
	printf("enter simple interest and time respecttively\n");
	scanf("%d%f%f",&p,&r,&t);
	
	printf("the principal interest is %.0f and amount is %.0f \n",SI(p,r,t),AMT(SI(p,r,t),p));
	
	
	return 0;
}

