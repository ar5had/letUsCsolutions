/*
 * preprocessorprog1.c
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
#define ISUPPER(x) (x>=65 && x<=90 ? 1:0)
#define ISLOWER(x) (x>=97 && x<=122 ? 1:0)
#define ISALPHA(x) (ISLOWER(x) || ISUPPER(x))
#define ISBIG(x,y) (x>y?x:y)
int main()
{
	char ch;int x,y;
	printf("enter the character you want to enter?\n");
	scanf("%c",&ch);
	if(ISLOWER(ch))
	printf("the character is lowercase\n");
	if(ISUPPER(ch))
	printf("the character is uppercase\n");
	if(ISALPHA(ch))
	printf("the character is an alphabet\n");
	else
	printf("the character is not an alphabet\n");
	
	printf("Enter the two nos you want to compare\n");
	scanf("%d%d",&x,&y);
	
	printf("the bigger no is %d\n",ISBIG(x,y));
	
	return 0;
}

