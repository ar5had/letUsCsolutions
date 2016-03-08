/*
 * ascending order linkedlist.c
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
#include <malloc.h>
struct node{
	int value;
	
	struct node* link;
	
	
	};
	
struct node *q,*front;

void input(int);

void display();



int main()
{
	q=NULL;
	
	input(60);
	
	input(40);
	
	input(30);
	
	
	input(10);
	
	
	
	input(100);
	
	
	display();
	
	
	
		
	return 0;
}

void input(int val){
	
	
		struct node *y,*x,*w=(struct node* )malloc(sizeof(struct node));
		
		
		
		w->value=val;
		
		
		
		if(q==NULL){
			
			w->link=NULL;
			
			q=w;
			
			front=q;
				
			
		}
		
		
		
		else{
			
			
			
			while(q!=NULL )
				{
					
					if(q->value > w->value){
							int temp=q->value;
							x=q->link;	
							q->link=w;
							q->value=w->value;
							w->value=temp;
							w->link=x;
								
							break;
					}
					
					q=q->link;
					
					
				}
			
			q=front;
				
		}
	
	
	
}

void display(){
	
		int i=0;
		struct node* w;
		
		w=q;
		while(w!=NULL){
			
		printf("%d \n",w->value);
		w=w->link;	
		i++;	
		}
	
	printf("Totl no of elements are %d \n",i);
	
}
