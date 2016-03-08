/*
 * studentDataRead.c
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
	
	struct stud{
		char name[40];
		
		int age;
		
	};
	
	struct stud s,st[10],temp;
	
	FILE *fp;
	
	int num,j,k;
	
	char fileName[50];
	
	puts("enter your filename");
	
	gets(fileName);
	
	
	fp=fopen(fileName,"rb");
	
	
	if(fp==NULL){
			puts("Wrong file name/path");
			exit(1);
		
	}
	
	num=0;
	while( (fread(&s,sizeof(s),1,fp) )==1){
		
		st[num]=s;
			
		num++;
	}
	//sorting code starts
	for(j=0;j<num-1;j++){
		for(k=j+1;k<num;k++){
			if(strcmp(st[j].name,st[k].name)>0){
				
				temp=st[j];
				st[j]=st[k];
				st[k]=temp;
			}
		}
	}
	
	
	//sorting code ends
	for(j=0;j<num;num++){
			printf("Name=%s Age=%d \n",st[j].name,st[j].age);
			exit(10);
	}
	
	fclose(fp);
	return 0;
}

