/*
 * signalmodifing.c
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
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void interruptHandler(){
	puts("interupt command recieved");
}
void stopHandler(){
	puts("stop command recieved");
}

void killHandler(){
	puts("kill command recieved");
}
void termHandler(){
	puts("termination command recieved");
}


int main()
{
	signal(SIGINT,interruptHandler);
	signal(SIGKILL,killHandler);
	signal(SIGSTOP,stopHandler);
	signal(SIGTERM,termHandler);
	printf("program is running\n");
	
	while(1);
		
	return 0;
}

