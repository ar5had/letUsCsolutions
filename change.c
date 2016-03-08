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
int rep(char *str, char* ow, char* nw);
FILE *fp,*fw;
int main(int argc, char *argv[])
{
	//used fw because to override data of file we need to create a new one with all modification and delete the old one
	//this is way to do file manipulations.
	
	char* fname=argv[3];
	char str[100];
	
	char* ow;
	
	char* nw;
	
	int n;
	
	if(argc!=4){
		
			printf("Invalid no of arguments");
			exit(1);
			
	}
		
	fp=fopen(fname,"r");
	
	if(fp==NULL){
		puts("wrong filename given");
	}
	fw=fopen("/home/arshad/Desktop/changedFile.txt","w");
	
	ow=argv[1];
	nw=argv[2];
	
	if(strlen(ow)!=strlen(nw)){
		
			puts("Words length are different so exiting....");
			
			exit(3);
	}
	
	while(fgets(str,99,fp)!=NULL){
		
		n=rep(str,ow,nw);
		
	}
	printf("No of change made is %d \n file change completed",n);
	fclose(fw);
	fclose(fp);
	
	remove(fname);
	rename("/home/arshad/Desktop/changedFile.txt",fname);
	return 0;
}
int rep(char *str, char* ow, char* nw){
	
	char *a,*b,*c,*d,*n;
	static int ct;
	
	b=ow;
	
	c=nw;
	
	d=str;
	
	while(1){
		n=strstr(d,ow);
	
		if(n==NULL) break;
	//copies rest string
		a=n + strlen(b);
	//copies new wordd to rest	
		strcat(c,a);
	//apends modifd to  rest of untouched string
		strcat(n,c);
	
		ct++;
	}
	
	fputs(d,fw);
	return ct;
}


