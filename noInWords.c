/*
 * noInWords.c
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
#include <string.h>

	char* ones[20]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen",
		"fifteen","sixteen","seventeen","eighteen","nineteen"};
	
	char* tens[10]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
void dispalay(long no,char* str);
int main()
{
	puts("enter a no not having more than 9 digits");
	
	
	
	long int no;
		
		puts("Enter you no!");
		scanf("%ld",&no);
		
		
		if((no/10000000000>=1))
		{			puts("you have given no > max digits");
					return 1;
		}else if(no<0){
					puts("you have given negative no ");
					return 1;
				}
			
			
		
		
		else{
			
			dispalay(	no/10000000 ,"crore"	);
			dispalay(	((no/100000)%100 ),"lac"	);
			dispalay(	((no/1000)%100),"thousand" );
			dispalay(	((no/100)%10),"hundred");
			dispalay(	(no%100),"");
		}
	
	return 0;
}

void dispalay(long int no,char* str){
		
		if(no>0){
			
			if(no>19)
			
				printf("%s %s ", tens[no/10],ones[no%10] );
				
			else
			
			printf("%s ",ones[no]);
			
			
			printf("%s ",str);
		
	}
}
	
