/*
 * bisection.c
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
#include <math.h>

double f(double x){
	
	return(x*x -5*x + 6);
	
	
}

int main()
{
	double a,b,c;

	double root;
	
	puts("This progrram finds root of equation x*x -5*x +6");
	
	puts("Enter the range");
	
	scanf("%lf %lf",&a,&b);
	
	if( f(a)*f(b) <= 0){
		
		if (f(a) ==0.0 ||  f(b) ==0.0)
		{	
		
			if (f(a) ==0.0)	
			
				printf("root is %lf\n",a);
			
			if (f(b) ==0.0)
		
				printf("root is %lf\n",b);
		
		}
			
		else{
			
			while(1){
					
					c=(a+b)/2;
					
					printf("c= (a+b)/2 = %lf \n",c);
					
					if(f(a)*f(c)<0)
					
						b=c;

					else
					
						a=c;
					
					if(fabs(f(a))<.001 || fabs(f(b))<.001){

						root=fabs(f(a))<.001?a:b;

						break;
					}
				
			}	//ends while
		
		printf("root is %lf",root);		
				
		}//ends else
		
	}
	
	else{
		
	puts("No roots in this range");	
		
	}
	
	return 0;
}

