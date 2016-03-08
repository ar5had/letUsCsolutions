/*
 * merge2in3rd.c
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
#include <string.h>

int main()
{
	FILE *f1,*f2,*f3;
	
	char str[80];
	char* p;
	char source1[50],source2[50],source3[50];
	
	puts("Enter the name of source file");
	
	gets(source1);
	
	puts("Enter the name of second source file");
	
	gets(source2);
	
	puts("Enterr the name of thirrd source ffile");
	
	gets(source3);
	
	f1=fopen(source1,"r");
	
	if(f1==NULL ){
		
			puts("file name is incorrect");
			
			exit(1);
	}
	
	f2=fopen(source2,"r");
	
	if(f2==NULL ){
		
			puts("file name is incorrect");
			
			exit(1);
	}
	
		f3=fopen(source3,"w");
	
	if(f3==NULL ){
		
			puts("file name is incorrect");
			
			exit(1);
	}	
	
	
	
	while(fgets(str,79,f1)!=NULL){
		
		p=strchr(str,'\n');
		
		fputs(str,f3);
		
		if(!p)
		fputs("\n",f3);
	}
	
	while(fgets(str,79,f2)!=NULL){
		
		p=strchr(str,'\n');
		

		fputs(str,f3);

		if(!p)
		fputs("\n",f3);

	}
	
	puts("files copied");
	
	fclose(f1);
	
	fclose(f2);
	
	fclose(f3);
	
	
	return 0;
}

