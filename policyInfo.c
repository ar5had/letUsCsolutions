/*
 * policyInfo.c
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
typedef struct policyInfo{
unsigned gender:1;
unsigned stat:1;
char name[20];
unsigned duration:2;	
}pi;

int main()
{
	pi a;
	int input;
	puts("Enter gender 1-male 0-female");
	scanf("%d",&input);
	a.gender=input;
	puts("Enter status of your education 1-major 0-minor");
	scanf("%d",&input);
	a.stat=input;
	puts("enter name");
	getchar();
	gets(&a.name);
	puts("Enter the duration between 0 to 4");
	scanf("%d",&input);
	a.duration=input;
	printf("gender=%d status=%d name=%s duration=%d",a.gender,a.stat,a.name,a.duration);
	
	return 0;
}

