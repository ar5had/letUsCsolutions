/*
 * bisecton2.c
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

#include<stdio.h>
#include <math.h>

#define ESP 0.001
#define F(x) (x)*(x)*(x) + (x)*(x) + (x) + 7
void main()
{
  int i = 1;
  float x0,x1,x2;
  double f1,f2,f0,t;

  printf("\nEnter the value of x0: ");
  scanf("%f",&x0);

  printf("\nEnter the value of x1: ");
  scanf("%f",&x1);
  printf("\n__________________________________________________________________\n");
  printf("\niteration\t x0\t       x1\t x2\t   f0\t   f1\t   f2");
  printf("\n___________________________________________________________________\n");
  do
  {
  x2=(x0+x1)/2;
  f0=F(x0);
  f1=F(x1);
  f2=F(x2);
  printf("\n%d %f %f %f %lf %lf %lf", i, x0,x1,x2,f0,f1,f2);
  if(f0*f2<0)
   {
    x1=x2;
   }
   else
   {
    x0=x2;
   }
   i++;
  }while(fabs(f2)>ESP);
printf("\n__________________________________________________________\n");
printf("\n\nApp.root = %f",x2);

}
