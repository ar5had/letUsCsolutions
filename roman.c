/*
 * roman.c
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
int roman(int yr,int b,char ch){
	
	int k=yr/b,i;
	
	if(k==4)
		printf("IV");
	else if(k==9)
		printf("IX");
	else{
		for(i=1;i<=k;i++)
		printf("%c",ch);
	}
	
	return(yr-b*k); 
}

	


int main()
{
	int yr;
	
	printf("enter the year :");
	
	scanf("%d",&yr);
	
	yr=roman(yr,1000,'M');
	
	yr=roman(yr,500,'D');
	
	yr=roman(yr,100,'C');

	yr=roman(yr,50,'L');
	
	yr=roman(yr,10,'X');
	
	yr=roman(yr,1,'I');
	
	
	
	return 0;
}

