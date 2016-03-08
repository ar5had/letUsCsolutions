/*
 * dayFinder.c
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

int main()
{
	int res,td,day,month,year;
	
	puts("Enter the day,month and year respectively after 1Jan 1990");
	
	scanf("%d%d%d",&day,&month,&year);
	
	td=(year-1900)*365 + (month-1)*30 + day;
	
	
	
	res=td%7;
	
	switch(res){
		
		
		case 0:
		puts("Sunday");
		break;
		
		case 1:
		puts("Monday");
		break;
		
		
		case 2:
		puts("Tuesday");
		break;
		
		
		case 3:
		puts("Wednesday");
		break;
		
		
		case 4:
		puts("Thursday");
		break;
		
		
		case 5:
		puts("Friday");
		break;
		
		
		case 6:
		puts("Saturday");
		break;
		
		
	}//ends switch
	
	
	return 0;
}

