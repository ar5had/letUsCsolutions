/*
 * changing file content via terrminal.c
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
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//used fw because to override data of file we need to create a new one with all modification and delete the old one
	//this is way to do file manipulations.
	FILE *fp,*fw;
	
	char* ow;
	
	char* nw;
	
	int n;
	
	if(argc!=4){
		
			printf("Invalid no of arguments");
			exit(1);
			
	}
		
	fp=fopen(argv[3],"r");
	
	if(fp==NULL){
		puts("wrong filename given");
	}
	fw=fopen("/home/arshad/Desktop/changedFile.txt","w");
	
	ow=argv[1];
	nw=argv[2];
	
	while(fgets(str,79,fp)!=NULL){
		
		n=rep(fp,ow,nw);
		
	}
	printf("No of change made is %d \n file change completed",n);
	fclose(fw);
	fclose(fp);
	return 0;
}

