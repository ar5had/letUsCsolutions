/*
 * countOfTHE.c
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
	
	char sen[80],sen2[80];
	puts("Enter the sentence");
	gets(sen);
	int i,count=0;
	for(i=0;i<strlen(sen);i++){
		
		if( (sen[i]=='t') && (sen[i+1]=='h') && (sen[i+2]=='e')  )
		{
			i+=2;
			count++;
			
			}
		else
		sen2[i-(count*3)]=sen[i];
	}
	
	sen2[i-count*3]=0;
	
	puts(sen2);
	
	return 0;
	
}

