/*
 * matrixtranspose.c
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

void entry(float (*p)[]);
void printMat(float (*p)[]);
void transpose(float (*p1)[]);


int main()
{
	
	
	float mat[4][4];
	
	entry(mat);
	
	printMat(mat);
	
	int i,j;
	
	/*try with j=0 */
	
	for(i=0;i<4;i++){
		
		for(j=i+1;j<4;j++){
			
			int temp=mat[i][j];
			
			mat[i][j]=mat[j][i];
			
			mat[j][i]=temp;
		}
	}
			 
	
	for(i=0;i<4;i++){
		
		for(j=0;j<4;j++){
			
			printf("%.0f ",mat[i][j]);
		}
		printf("\n");
	}
			
	
	
	return 0;
}

void entry(float (*p)[4]){
	printf("Get ready to enter 4 by 4 matrix \n");
	int i,j;
	float* p1;
	
	for(i=0;i<4;i++){
		
		p1=(float*)p[i];
		
		for(j=0;j<4;j++){
			scanf("%f",p1);
			p1++;
		}
		
	}
	
}
void printMat(float (*p)[4]){
	int i,j;
	float* p1;
	
	for(i=0;i<4;i++){
		
		p1=(float*)p[i];
		
		for(j=0;j<4;j++){
			printf("%.0f ",*p1);
			p1++;
		}
		printf("\n");
		
	}
}

/*
void transpose(float (*p1)[]){
	
	int i,j;float* p;
	
		
	for(i=0;i<4 ;i++){
		
		
		
		for(j=0;j<4;j++){
			
			 why is this an error 
			
				p=(float*)p1[j];
				printf("%f ",*(p));
				
			
			
		}

		
		printf("\n");
	}
}
*/
