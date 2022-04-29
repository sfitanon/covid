#include <stdio.h>
#include <conio.h>
#include "Area.h"

void main()
{
    int a,b,choice;
    printf("Menu \n1)Square \n2)Rectangle \n3)Triangle \n4)Circle \n5)Exit");
	while(choice!=5)
  	{
  		printf("\nEnter the choice:");
  		scanf("%d",&choice);
  		switch (choice)
  		{
  		case 1:
    		printf("\nEnter Value of side:");
			scanf("%d",&a);
			printf("Area of square = %d",squareArea(a));
			break;

  		case 2:
    		printf("\nEnter Value of length:");
			scanf("%d",&a);
			printf("\nEnter Value of breath:");
			scanf("%d",&b);
			printf("Area of Rectangle = %d",rectangleArea(a,b));
			break;
		
		case 3:
			printf("\nEnter Value of height:");
			scanf("%d",&a);
			printf("\nEnter Value of base:");
			scanf("%d",&b);
			printf("Area of Triangle = %lf",triangleArea(a,b));
			break;
		
  		case 4:
    		printf("\nEnter Value of radius:");
			scanf("%d",&a);
			printf("Area of Circle = %lf",circleArea(a));
			break;
  		
		case 5:
    		break;
    
  		default:
			printf("\nEnter a valid choice");
      		break;
    }
  }
  
getch();
}
