/*
 * primefactorsbyrecandnotrec.c
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

void primeRec(int n);
void primeNotRec(int n);

int main()
{	
	int n;
	printf("Enter your no whose all prime factors you want to find out.\n");
	scanf("%d",&n);
	
	printf("Prime factors by recursion are as follows:\n");
	
	primeRec(n);
	printf("Prime factors by recursion are as follows:\n");
	primeNotRec(n);
	
	return 0;
}
void primeRec(int n){
	
	static int i=2;
	
	if(n!=1){
	
			if(n%i==0)
			
			{	printf("%d\n",i);
				
				primeRec(n/i);
				
			}
			
			else
			{
				i++;
				
				primeRec(n);
				
			}
	
	}
	
	
	
	
	
}
void primeNotRec(int n){
	
	static int i=2;
	
	while(n!=1)
	{
			if(n%i==0){
				printf("%d\n",i);
				n=n/i;
			
			}
			
			else
				i++;
			
	
	
	}
	
	
	
	
	
	
}

