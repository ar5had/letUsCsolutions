/*
 * acronymName.c
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
	char name[50],acro[40];int words=1,i=1;
	
	puts("enter the name:");
	
	gets(name);
	
	while(name[i]!='\0'){
		
		
		if(name[i]==' ')
			words++;
		
		i++;
		//printf("in lopp1 \n");
			
	}
	if(words==1)
		
			strcpy(acro,name);
	
	else{
		
		int j=0;i=0;
		
		while(name[i]!=0){
		
			if(name[i] == ' ')
			words--;
			
			if(i==0 || ( (name[i-1] == ' ') && words>1 ))
			{
				acro[j]=name[i];
				j++;
				acro[j]=' ';
				j++;
			}
			else if( words==1 && (name[i]!= ' '))
			{
				acro[j]=name[i];
				j++;
			}
			
			else;
			
			i++;
			
		}//ends while loop
		acro[j]=0;
	}//ends else
	
	puts(acro);
	
	puts("By pointer approach-->");
	
	char*p;
	
	p=name;
	
	int count=1;
	
	while(*p){
		
		
		if(*p==' ')
			count++;
			
		p++;
		
	}
	
	p=name;
	
	
	while(count>1){
		
		
		printf("%c.",*p);
		
		while(*p != ' ')
		
			p++;
			
		
		p++;
		
		count--;
		
	}
	
	printf("%s",p);
	
	


	return 0;
}

