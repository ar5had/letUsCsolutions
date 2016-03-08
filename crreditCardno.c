/*
 * crreditCardno.c
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

int main(int argc, char **argv)
{

	char no[17];
	
	gets(no);
	
	int i;
	int digit,sum=0;
	
	
	for(i=15;i>=0;i--){
		
		if(no[i]>=48 && no[i]<=57){
		
					
					digit=no[i] -'0';
				
				if(i%2==0){
					
					
					
					digit*=2;
					
					
					
					digit=(digit>=10)? (digit-9):digit;
					
				//	printf("%d ",digit);
					
				}
				sum+=digit;
				 
			}
			
	}

	if(sum%10==0)
	
	puts("Valid card no");
	
	else
	
	puts("Not valid card");
	
	
	return 0;
}

