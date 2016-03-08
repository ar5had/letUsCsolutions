/*
 * stack.c
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
struct list{
	int value;
	
	struct list* link;
	
	};

struct list *top;

	
int pop();
void push(int);
void displayAndCount();
int peek();

int main()
{
	
	
	top=NULL;
	
	int a=peek();
	
	printf("PEEKING:%d \n",a);
	
	push(1);
	
	push(2);
	
	push(3);
	
	displayAndCount();
	
	
	printf("PEEKING:%d \n",peek());
	
	printf("POPPING%d \n",pop());
	
	printf("POPPING%d \n",pop());
	
	printf("PEEKING%d \n",peek());
	
	displayAndCount();
	
	return 0;
	
}

void push(int val){
		
	struct list* q=(struct list*)malloc(sizeof(struct list));
	
	q->value=val;
	q->link=top;	
	
	top=q;	
	
	
	
}
int pop(){
	
		struct list* q;
		
		
		
		if(top==NULL)
			{
				 puts("Stack is empty");
				 
				 
			 }
		else{
			int x= top->value;
			
			q=top->link;
			
			top=q;
			
			return x;
		}
		
	
}

void displayAndCount(){
	
		struct list* q;
		int i=0;
		q=top;
		while(q!=NULL){
			
			i++;
			
			printf("%d\n",q->value);
			q=q->link;
			
			
		}
		
	printf("No of elemnts are %d\n",i);
}

int peek(){
	
		
		
		
		if(top==NULL)
			{
				 puts("Stack is empty");
				 
				 
				 
			 }
		else{
			int x= top->value;
			
			
			return x;
		}
	
	
	
	
}
