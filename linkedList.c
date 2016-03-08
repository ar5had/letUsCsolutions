/*
 * linkedList.c
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


void display();
void add(int);
void addAtLast(int);
void addAtLoc(int , int);

struct linkedList{
	
	int item;
	
	struct linkedList* link;
	
	
	};
	
struct linkedList *p,*w;

int main()
{
	puts("This program builds a linked list and prints it and allows you to add at beg,bottom and any random location");

	p=NULL;//for start

	add(50);

	add(100);

	add(150);

	add(200);

	add(250);

	printf("The items that are added in linked list are as follows:\n");

	display();

	printf("Now adding items at the end of linked list \n");

	addAtLast(300);

	display();

	printf("Now adding items at a loacation in between front and end");

	addAtLoc(175,4);

	display();

	return 0;
}

void add(int itm){
	
	struct linkedList *q=(struct linkedList*)malloc(sizeof(struct linkedList) );
	
	q->item=itm;
	
	q->link=NULL;
	
	
	if(p==NULL){
		
		p=q;
	}
	else{
		
		q->link=p;
		
		p=q;
	}
	
}

void addAtLast(int itm){
	
	
	struct linkedList* q=(struct linkedList*)malloc(sizeof(struct linkedList));
	
	w=p;
	
	q->item=itm;
	
	q->link=NULL;
	
	if(p==NULL){
		
	p=q;
	

	}
	
	else{
		
		while( p->link != NULL)
			p=p->link;
		p->link=q;
	}
	
	p=w;
	
}//add at end function


void addAtLoc(int itm, int loc){

	struct linkedList* q =	(struct linkedList*)malloc(sizeof(struct linkedList));

	struct linkedList* z;
	
	w=p;

	int i=1;

	q->item=itm;
	
	q->link=NULL;
	
	if(p==NULL){
		
		p=q;
	}

	else{
		
			
		while( i!=loc-1 && p->link==NULL){
			
				p=p->link;
			
				i++;
		}
		
		if(i==loc-1){
			z=p->link;
			
			p->link=q;
			
			q->link=z;
			
		}
		
		else
			p->link=q;
	}//else ends	
	
	p=w;
	
	free(z);
}
void display(){
	
	if(p!=NULL){
	
			while(p->link!=NULL){
				
					printf("%d \n",p->item);
					
					p=p->link;
				
			}
		
	}
	
}
