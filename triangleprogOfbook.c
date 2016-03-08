/*
 * triangleprogOfbook.c
 * In this program , we are having some librarry issues so it will continued later!!!
 * 
 * 
 */


#include <stdio.h>
#include <math.h>
float distance(int* x1,int* y1,int* x2,int* y2){
	float dis;
	
	
	dis=sqrt(pow(*x2-*x1,2) + pow(*y2-*y1,2) );
	
	
	
	return dis;
}

float area(int* x1,int* y1,int* x2,int* y2,int* x3,int* y3){
	float ar;
	
	float a=distance(x1,x2,y1,y2);
	float b=distance(x1,x3,y1,y3);
	float c=distance(x2,x3,y2,y3);
	float s=a+b+c;
	
	ar=sqrt(  s*(s-a)*(s-b)*(s-c)  );
	
	return ar;
}


int main()
{	int x1,x2,x3,x4,y1,y2,y3,y4;
	printf("Enter the first two coordinates: x1 y1 and x2 y2 respectively..\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	printf("The distance betwween the points are %f\n",distance(&x1,&y1,&x2,&y2));
	
	printf("Enter the third coordinates");
	scanf("%d%d",&x3,&y3);
	printf("Area of the Triangle is %f \n",area(&x1,&y1,&x2,&y2,&x3,&y3));
	
	printf("Enter the fourth coordinates");
	scanf("%d%d",&x4,&y4);
	//printf("If value next printed is one then point is inside the triangle and vice versa,\n and the value is %d",inOrOut(&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4));
	
	
	return 0;
}

