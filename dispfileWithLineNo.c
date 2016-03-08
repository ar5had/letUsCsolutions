/*
 * dispfileWithLineNo.c
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

int main()
{	
	FILE *fp;
	
	char ch;
	
	char source[70];
	
	int count=1;
	
	puts("Enter the file name");
	
	gets(source);
	
	fp=fopen(source,"r");
	
	if(fp==NULL){
		
			printf("That file doesn't exist");
			exit(0);
	}
	
	printf("File name:%s\n",source);
	
	printf("\n Line no:%d",count);
	
	
	while( (ch=getc(fp))!=EOF ){
		
			if(ch=='\n'){
					count++;
					
					printf(" \n Line no:%d",count);
			}
	
			else
			
			printf("%c",ch);
	
		
	}
	
	fclose(fp);
	return 0;
}

