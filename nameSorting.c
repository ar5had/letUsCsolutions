/*
 * nameSorting.c
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
int main()
{
	
	char *str[]={
		
		"zubair",
		"junaid",
		"sahil",
		"arshad",
		"zohr",
		"manny"
		
		
		};
	
	
	
	
	
	int i,j;
	
	
	for(i=0;i<6;i++){
	
			for(j=0;j<6-i;j++){
		
				
				
				if((strcmp(str[j],str[j+1]))>0){
					char* t=str[j];
					str[j]=str[j+1];
					str[j+1]=str[j];
					
				}
		
				
				
		
			}
	
	}
	
	puts("In ascending order:");
	for(i=0;i<6;i++){
		printf("%s \n",str[i]);
		
		
	}
	
	
	return 0;
}

