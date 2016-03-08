/*
 * reverseFile.c
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

void strrev(char* word,int length);
int main()
{
	FILE *fp;char ch;
	
	char source[30],word[200];
	
	puts("enter the ssource path");
	
	gets(source);
	
	fp=fopen(source,"r");
	
	if(fp==NULL){
		
			puts("wrong source file name");
			exit(1);
	}
	int i=0;
/*	while(fgets(word,199,fp)!=NULL){
		
			strrev(word,strlen(word));
			
			puts(word);
	}*/
	while((ch=getc(fp))!=EOF){
		
			if(ch=='\n' || ch==' '){
				word[i]='\0';
				strrev(word,strlen(word));
				printf("%s ",word);
				i=0;
			}
			else
			word[i++]=ch;
	}
	fclose(fp);
	return 0;
}

void strrev(char* word,int length){
	
	char temp,*last,*start;
			
	start=word;
	
	last=word+length-1;
	
	while(start<last){
		
		
		temp=*start;
		*start=*last;
		*last=temp;
		
		start++;
		
		last--;
	}
	
	
}
