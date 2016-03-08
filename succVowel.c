/*
 * succVowel.c
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
	char  words[50];
	
	gets(words);
	
	/*
	int i,count=0;
	
	while(words[i]!=0)
	{
		
		if (words[i] == 'a' || words[i] == 'e' || words[i]== 'i'  || words[i] == 'o' || words[i]== 'u' 
		|| words[i] == 'A' || words[i] == 'E' || words[i]== 'I'  || words[i] == 'O' || words[i]== 'U' )
		  { 
			  if (words[i+1] == 'a' || words[i+1] == 'e' || words[i+1]== 'i'  || words[i+1] == 'o' || words[i+1]== 'u' 
		|| words[i+1] == 'A' || words[i+1] == 'E' || words[i+1]== 'I'  || words[i+1] == 'O' || words[i+1]== 'U' )
		
		count++;
		
		}
		
		i++;
		
	}
	
	printf("The no of two succesive vowels is/are %d",count);
	
	puts("pointer approach-->");
	*/
	 int count=0;
	
	char* p=words;
	
	while(*p){
		
		
		if(*p == 'a' || *p == 'e' || *p== 'i'  || *p == 'o' || *p== 'u' 
		|| *p == 'A' || *p == 'E' || *p== 'I'  || *p == 'O' || *p== 'U' )
		
		{
			p++;
			
			if(*p == 'a' || *p == 'e' || *p== 'i'  || *p == 'o' || *p== 'u' 
		|| *p == 'A' || *p == 'E' || *p== 'I'  || *p == 'O' || *p== 'U' )
			
			count++;
			
			
		
		
		}
		
		p++;
	}
		printf("the no of succesive vowels:%d",count);
	return 0;
}

