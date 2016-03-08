/*
 * sorting
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

void arrayEntry(int* pos){
	int i;
	for(i=0;i<5;i++){
		scanf("%d",pos);
		pos++;
		
	}
	
}

void selectionSort(int* pos){
	
	int i,j;
	
	
	
	for(i=0;i<4;pos++,i++){
		
		int* pos1;
		pos1=pos;
		
		for(j=i+1,pos1++;j<5;pos1++,j++){
			
			if(*pos1<*pos){
				
				int t=*pos1;
				*pos1=*pos;
				*pos=t;
			}
				
				
			
		}
	}
	
}

void swap(int* pos,int* pos1){
	
	int t;
				
				t=*(pos1);
				
				*(pos1)=*pos;
				
				*pos=t;
	
}

void bubbleSort(int* pos){
	
	int i,j;
	
	
	
	for(i=0;i<4;i++,pos++){
		
		int* pos1;
		pos1=pos;
			
		for(j=0,pos1++;j<4-i;j++,pos1++){
				
			if(*(pos1)<*pos){
				
				int t;
				
				t=*(pos1);
				
				*(pos1)=*pos;
				
				*pos=t;
				
			}
		}
	}
	
}

void compareWithRest(int* pos,int* pos1,int*startPos){
	
	while(1){
		
		if(*(pos1)<*pos){
				
				swap(pos,pos1);
				pos1=pos;
			}
		if(pos==startPos)
			return;
		pos--;
	}
	
}














void insertionSort(int* pos){
	
	
	int* lastPos=pos+4;
	int* startPos=pos;
	int* pos1=pos+1;
	
	while(1){
		
		
		
		if(*(pos1)<*pos){
				
			

			
			compareWithRest( pos,pos1,startPos);
			
			
		}
		
		if(pos1==lastPos)
			break;
			
		pos++;
		pos1++;
	}//ends while loop
}
		
		
	

int main()
{
	printf("Enter the 5 nos whom you want to sort by selection sort \n");
	
	int nos[5];

	arrayEntry(&nos[0]);
	
	selectionSort(&nos[0]);
	
	int i;
	
	printf("By selection sort \n");
	
	for(i=0;i<5;i++){
		
		
		
		printf("%d \n",nos[i]);
		
	}
	
	printf("Enter the 5 nos whom you want to sort by bubble sort \n");
	
	arrayEntry(&nos[0]);
	
	bubbleSort(&nos[0]);
	
	printf("By bubble sort \n");
	
	for(i=0;i<5;i++){
		
		printf("%d \n",nos[i]);
		
	}
	
	printf("Enter the 5 nos whom you want to sort by insertion sort \n");
	
	arrayEntry(&nos[0]);
	
	insertionSort(&nos[0]);
	
	printf("By insertion sort \n");	
	
	for(i=0;i<5;i++){
		
		printf("%d \n",nos[i]);
		
	}
	
	return 0;
}

