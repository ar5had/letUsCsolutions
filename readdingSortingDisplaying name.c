/*
 * readdingSortingDisplaying name.c
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
	FILE *fp;
	int n,i,l,k;
	char word[25][25],*str[25],*temp;
	char source[30];
	
	puts("Enter thee file name");
	gets(source);
	
	fp=fopen(source,"r");
	
	if(fp==NULL){
			puts("The filename given is incorrect");
			exit(2);
	}
/*	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(fgets(&word[i][j],24,fp)==NULL){
				flag=1;
			break;}
		}
		if(flag==1)
			break;
	}
	
	for(k=0;k<=i;k++){
		for(l=0;l<=j;l++){
			printf("%s \n",&word[k][l]);
			
		}
		
	}
	* 
	* */
	
	for(i=0;i<25;i++)
		str[i]=word[i];
	
	
	for(n=0;fgets(str[n],24,fp)!=NULL;n++);
	
	for(k=0;k<=n-2;k++){
		for(l=k;l<=n-1;l++){
			
			if(strcmp(str[k],str[l])>0)
			{
				temp=str[k];
				str[k]=str[l];
				str[l]=temp;
				
			}
			
		}
	}
	
	for(i=0;i<=n-1;i++){
			printf("%s",str[i]);
		
	}
	return 0;
}

