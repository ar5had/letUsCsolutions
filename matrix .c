/*
 * matrix .c
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

void inputMat(int (*m1)[3],int (*m2)[3]){
	int i,j;
	int* m11;
	
	
	puts("Enter the first matrix values ");
	for(i=0;i<3;i++){
		
		m11=m1[i];
		
		for(j=0;j<3;j++){
		scanf("%d",m11);
		m11++;}
		
		
	}
	puts("Enter the second matrix values ");
	for(i=0;i<3;i++){
		
		m11=m2[i];
		
		for(j=0;j<3;j++){
		scanf("%d",m11);
		m11++;}
		
	}
	
	
}

void display(int (*m1)[3],int (*m2)[3],int (*m3)[3]){

	int i,j;int* m11;
	
	for(i=0;i<3;i++){
			
		m11=m1[i];
		for (j=0; j<3; j++){
			
			printf("%d ",*m11);
			m11++;
		}
		printf("\n");
	}
	
	puts("");
	for(i=0;i<3;i++){
		
		
		m11=m2[i];
		for (j=0; j<3; j++){
			
			printf("%d ",*m11);
			m11++;
		}
		printf("\n");
	}
	
	puts("");
	for(i=0;i<3;i++){
		
		m11=m1[i];
		for (j=0; j<3; j++){
			
			printf("%d ",*m11);
			m11++;
		}
		printf("\n");
	}
	
			
}
int main()
{	
	int m1[3][3],m2[3][3],m3[3][3];
	
	inputMat(m1,m2);
	
	
	display(m1,m2,m3);
	
	return 0;
}

