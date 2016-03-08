/*
 * checkbits.c
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
#include <stdlib.h>
#define bv(x) (1<<x)
void checkbits(int x,int p,int n);
int main()
{	int x,p,n;
	puts("Enter the no , the bit position and no of bit to check whether they are on or not");
	scanf("%d%d%d",&x,&p,&n);
	
	checkbits(x,p,n);
	
	return 0;
}
void checkbits(int x,int p,int n){
		int flag=0,i;
	
		for (i=p;i>(p-n);i--){
				
				if( (x & bv((i-1)))!=bv((i-1)) ){
					
					flag=1;
					break;
				}
			
		}
		
		flag==1?printf("bits are incorrect"):printf("bits are correct");
		
}
