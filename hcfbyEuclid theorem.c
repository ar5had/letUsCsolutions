/*
 * hcfbyEuclid theorem.c
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

int findHCF(int* n,int* m){
	if(*n==*m)
	
		return *n;
		
	if(*n>*m){
		int t=*n;
		*n=*m;
		*m=t;
	}
	
	
	while(*n%*m!=0){
		
		int t=*n%*m;
		
		*n=*m;
		
		*m=t;
		
		
			
		
	}
	
	return *m;

}

int findHCFbyRec(int* n,int* m){
	if(*n%*m!=0){
				
			if(*n==*m)
			
				return *n;
				
			if(*n>*m){
				int t=*n;
				*n=*m;
				*m=t;
			}
			
			
			
					
					int t=*n%*m;
					
					*n=*m;
					
					*m=t;
					
					
					
		
			return *m;
	}
	
	else 
	return *m;
}


int main()
{	int n1,n2;
	printf("Enter the two nos whose HCF you want to find out.\n");
	scanf("%d%d",&n1,&n2);
	
	int hcf1=findHCF(&n1,&n2);
	int hcf2=findHCFbyRec(&n1,&n2);
	
	
	printf("The hcf of the given nos by iteration logic is %d\n",hcf1);
	printf("The hcf of the given nos by recursion logic is %d\n",hcf2);
	return 0;
}

