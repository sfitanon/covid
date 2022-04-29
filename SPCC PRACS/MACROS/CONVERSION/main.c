#include<stdio.h>
#include "conversion.h"
int main()
{
float a;
int choice;
printf("\nMenu\n1.Celcius to fahrenheit\n2.fahrenheit to Celcius\n3.meter to feet\n4.feet to meter\n5.litre to cubic meter\n6cubic meter to liter\n");
printf("Enter choice");
scanf("%d", &choice);
switch(choice){
case 1:
     printf("Enter the value in celcius");
	 scanf("%f", &a);
	 printf("The fahrenheit value is %f",ctof(a));
	 break;
case 2:
     printf("Enter the value in F");
	 scanf("%f", &a);
	 printf("The C value is %f",ftoc(a));
	 break;
case 3:
     printf("Enter the value in M");
	 scanf("%f", &a);
	 printf("The F value is %f",mtof(a));
	 break;
case 4:
     printf("Enter the value in F");
	 scanf("%f", &a);
	 printf("The M value is %f",ftom(a));
	 break;
case 5:
     printf("Enter the value in L");
	 scanf("%f", &a);
	 printf("The Cu value is %f",ltocu(a));
	 break;
case 6:
     printf("Enter the value in Cu");
	 scanf("%f", &a);
	 printf("The L value is %f",cutol(a));
	 break;
default:
printf("Invalid choice");
break;
	
}
return 0;
}