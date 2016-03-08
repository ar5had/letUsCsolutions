/*
 * goFreeVowel.c
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
	char sen[80];char sen2[80];
	puts("Enter the sentence");
	gets(sen);
	int i,vowel=0;
	
	//printf("%d",sen[strlen(sen) ]);
	//sen=strlwr(sen);
	for(i=0;i<strlen(sen);i++){
		
		if( ( sen[i]=='a' ||  sen[i]=='e' || sen[i]=='i' || sen[i]=='o'||
			sen[i]=='u') )
			vowel++;
			
		else
			sen2[i-vowel]=sen[i];
			
		
	}	
	sen2[i-vowel ]=0;
			
		puts(sen2);
	//printf("%d",vowel);
	
	return 0;
}

