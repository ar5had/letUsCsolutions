/*
 * isbn.c
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

int main()
{
	
	puts("enter the 10 digit ISBN no :");
	char no[11];
	
	gets(no);
	
	if(strlen(no)!=10){
		puts("no is not of 10 digits so not isbn no");
		return 1;}
	else if(no[0]=='-'){
		puts("sorry,no is negative,cant be isbn no");
		return 2;}	
		
	else{	
					
				int i,d=1,sum=0;
				for(i=9;i>=0;i--){
					
					sum+=(no[i]-'0')*d;
					d++;
					
				}
				
				if(sum%11==0)
				puts("Yes, the book no is isbn no");
				
				else
				puts("No, the book no is not isbn no");
				
				
	}	
		
	
	return 0;
}

