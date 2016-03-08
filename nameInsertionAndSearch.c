/*
 * nameInsertionAndSearch.c
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
	
	int no;
	
	char name[40],choice;
	
	char fileName[50];
	
	puts("Enter file name ");
	
	gets(fileName);
	
	choice='y';
	
	fp=fopen(fileName,"w+");
	
	if(fp==NULL){
			
			puts("Wrong file name");
			
			exit(10);
		
	}
	
	while(choice=='y' || choice=='Y'){
		
		puts("Enter name");
		
		gets(name);
		
		fputs(name,fp);
		
		fputs("\n",fp);
		
		printf("do you want to enter more names y/n \n");
		//fflush(stdin);
		
		choice = getchar();
	}
	
	puts("Enter the no whose name you want to know");
	
	scanf("%d",&no);
	
	fseek(fp,0,SEEK_SET);
	
	while(fgets(name,21,fp)!=NULL){
			no--;
			if(no == 0){
				
			puts(name);	
			}
		
	}
	if(no>0){
			puts("No name exists for that no");
		
	}
	
	
	return 0;
}

