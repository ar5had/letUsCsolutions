/*
 * printGraphicalNos.c
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
	int digits[10][8][5] = {
		
		
											{
												{1,1,1,1,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,1,1,1,1}
											},
											{
												{0,0,1,0,0},
												{0,1,1,0,0},
												{0,0,1,0,0},
												{0,0,1,0,0},
												{0,0,1,0,0},
												{0,0,1,0,0},
												{0,0,1,0,0},
												{0,1,1,1,0}
											},
											
											{
												{1,1,1,1,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,1,1},
												{0,0,1,0,0},
												{1,1,0,0,0},
												{1,0,0,0,0},
												{1,1,1,1,1}
											},
											
											{
												{1,1,1,1,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,1,1,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{1,1,1,1,1}
											},
											{
												{1,0,0,0,1},
												{1,0,0,0,1}, 
												{1,0,0,0,1},
												{1,1,1,1,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,0,1}
											},
											{
												{1,1,1,1,1},
												{1,0,0,0,0},
												{1,0,0,0,0},
												{1,0,0,0,0},
												{1,1,1,1,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{1,1,1,1,1}
											},
											{
												{1,1,1,1,1},
												{1,0,0,0,0},
												{1,0,0,0,0},
												{1,0,0,0,0},
												{1,1,1,1,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,1,1,1,1}
											},
											{
												{1,1,1,1,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{0,0,0,0,1}
											},
											{
												{1,1,1,1,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,1,1,1,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,1,1,1,1}
											},
											{
												{1,1,1,1,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,0,0,0,1},
												{1,1,1,1,1},
												{0,0,0,0,1},
												{0,0,0,0,1},
												{1,1,1,1,1}
											}
							
						};
								
							
		char no[6];
		
		puts("Enter you no(max 5 digits)!");
		scanf("%s",no);
		
		if(strlen(no)>5)
		{			puts("you have given no > max digits");
					return 1;
		}
		int i=0;
		
		
		while(i<8){
			int j;
			
			for(j=0;j<strlen(no);j++){
				
				int k;
				for(k=0;k<5;k++){
					
				
					if( digits[ (no[j]-48) ][i][k]==1 )
					printf("#");
					else
					printf(" ");
					
				}//for loop1
				
				printf(" ");
			}	//for loop 2

			puts("");
			
			i++;
		}//while
		
	
	return 0;
}
