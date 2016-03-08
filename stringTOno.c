/*
 * string to no.c
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
#include <math.h>
#include <string.h>
int poww(int b,int p){
	
	int result;
	
	if(p >= 1 ){
		result = b* poww(b,p-1);
		
		return result;
	}
	
	else
	return 1;
	
}
int main()
{
	
	char no[11];
	
	puts("Enter a no that is max to max 10 digits long:");
	
	
	scanf("%s",no);
	
	int len=strlen(no)-1;
	int sum=0;int i=0;
	
	while(len>=0){
	
	if((int)no[len] >=48 && (int)no[len] <=57){
		sum+=(no[len]-48) * poww(10,i);
		
			
	}
	else
	{
		puts("all characters of inputed strings are not nos!");
		return 0;
	}
	i++;
	len--;
	
}//emds while loop

	printf("%d",sum);
	return 0;
}

