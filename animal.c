/*
 * animal.c
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

#define bv(x) (1<<x)
#include <stdio.h>

int main()
{
	struct animal{
		
		char name[30];
		
		int type;
	};

	int i=0;

	struct animal a={"OCELOT",18};
	
	
	if(  (18 & bv(4))== bv(4)){
		
		printf("%s is carnivore",a.name);
		
	}
	else{
		
		printf("%s is herbivore ",a.name);	
	}
	
	while(i<=3){
		
		
		if( (18 & bv(i) )== bv(i))

		break;
		
		i++;

	}//loop will surely break coz animal will be one of the type 
	
	switch(i){
		
		case 0:
			
		printf("and canine");
		
		break;

		case 1:
			
		printf("and feline");
		
		break;

		case 2:			

		printf("and cetacean");
		
		break;	
		
		case 3:			

		printf("and marsupial");
		
		break;	
		
		
		default:

		printf("Invalid type");
			
	}
	
	return 0;

}

