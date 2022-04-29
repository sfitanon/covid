#include<stdio.h>
#include "area.h"

int main()
{
int choice, n1, n2;
printf("Menu \n1.Square\n2.Rectangle\n3.Triangle\n4.Circle\n");
printf("Enter choice ");
scanf("%d",&choice);
switch (choice)
{
case 1:
     printf("\nEnter length of the square\n");
	 scanf("%d", &n1);
	 printf("\nArea of Sauare is %d\n", sqArea(n1));
	 /*break;*/
case 2:
     printf("Enter length rect\n");
	 scanf("%d" , &n1);
	 printf("Enter breadth rect\n");
	 scanf("%d" ,&n2);
	 printf("Area of Rect is %d\n", rectArea(n1,n2));
	 /*break;*/
case 3:
     printf("Enter base of triangele\n");
	 scanf("%d", &n1);
	 printf("Enter height of triangele\n");
	 scanf("%d", &n2);
	 printf("Area of triangle is %lf\n", triArea(n1,n2));
	 /*break;*/
case 4:
printf("Enter radius of circle");
scanf("%d", &n1);
printf("Area of circle is %lf\n", circleArea(n1));
/*break;*/
default: 
      printf("\nEnter valid choice");
	  break;	 
}

return 0;
}