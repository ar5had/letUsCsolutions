/*
 * engineStruct.c
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

struct engine {
	
	
	int serial;
	int yom;
	char material[15];
	int quantity;
	
};


void input();

void retrieve();

void display();

struct engine part[2];

int main()
{
	input();
	
	display();
	
	retrieve();
	
	return 0;
}

void input(){
	
	puts("Get readdy to enter the inputs for machine part!");
	
	int i;
	
	for(i=0;i<2;i++){
		
		
		while(1){
					
				puts("Enter the serial no between AA0 to FF9 ");
				
				scanf("%x",&part[i].serial);
				
				/*why on giving a string it continues infinite loop wven not stops on fflush(stdin) */
				
				if(part[i].serial>=0xaa0 && part[i].serial<=0xff9)
				break;
				
				else
				puts("The serial is out of range provided");
				
				
				
		} //ends while loop
	
		
		puts("Enter the year of manufacturing ");
		
		scanf("%d",&part[i].yom);
		
		puts("Enter the material name");
		
		scanf("%s",&part[i].material);
		
		puts("Enter the quantity ");
		
		scanf("%d",&part[i].quantity);
			 
		
		
	}//ends for loop
	
}


void display(){
	
	puts("Now the engine specifications is going to be displayed ");
	
	int i;
	
	for(i=0;i<2;i++){
		
		printf("The serial no is %x \n",part[i].serial);
		
		printf("The material of part is %s \n ",part[i].material);
				
		printf("The quantity of part is %d \n ",part[i].quantity);		
			
		printf("The year of manufacturing is %d \n",part[i].yom);
	}//ends for loop
}	


void retrieve(){
	
	int i,j;
	for(i=0; i<2; i++){
		
		if(part[i].serial >= 0xbb9 && part[i].serial <= 0xcc6)
		{
			j=1;
			
			printf("The serial no is %x \n",part[i].serial);
		
			printf("The material of part is %s \n ",part[i].material);
				
			printf("The quantity of part is %d \n ",part[i].quantity);		
			
			printf("The year of manufacturing is %d \n",part[i].yom);
			
		}
		
		
		
	}//ends for loop
	
	if(j==0)
	
	puts("There is no engine part in that range");
	
}
