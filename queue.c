/*
 * queue.c
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

struct list *rear,*front;

void enque(int );

int deque();

void countAndDisplay();

int main()
{
	rear=front=NULL;
	
	enque(10);
	
	enque(10);
	
	enque(10);
	
	countAndDisplay();
	
	printf("dequeing:%d\n",deque());
	
	printf("dequeing:%d\n",deque());
	
	countAndDisplay();
	
	printf("dequeing:%d\n",deque());
	
	countAndDisplay();
	
	
	return 0;
}
void enque(int val){
		
		struct list *w;
		
		struct list *q=(struct list*)malloc(sizeof(struct list));
			
		q->value=val;
	
		q->link=NULL;
			
		if(rear==NULL && front == NULL){
			
			
				front=q;
		}
		
		else{
				w=front;
				while(w->link!=NULL){
					
					w=w->link;
					
					
				}//ends while
					
				w->link=q;	
			
				
			
		}//else
		
		rear=q;
			
}
int deque(){
	
	struct list *w;
	
	if(front==NULL){
		
			printf("Queue is empty!\n");
	}
	
	else{
		
		int val=front->value;
			
		w=front->link;
		
		//free(front);
		
		front=w;
		
		return val;
	}
	
}


void countAndDisplay(){
	
	struct list *w=front;
	int i=0;
	while(w!=NULL){
		
		printf("%d\n",w->value);
		
		w=w->link;
		i++;
	}
	
	printf("The no elements in queue is %d\n",i);
}
