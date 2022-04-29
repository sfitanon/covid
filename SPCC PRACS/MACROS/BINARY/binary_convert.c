#include <stdio.h>
#include <conio.h>
#include "Binary_Convert.h"

int main()
{
    int choice;
    int a;
    char c[100];
	char hexdec[100];
    printf("Menu \n1)Binary to Decimal \n2)Decimal to Binary \n3)Binary to Hexadecimal \n4)Hexadecimal to Binary\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter Value in Binary:");
        scanf("%d", &a);
        bintodec(a);
        break;

    case 2:
        printf("\nEnter Value in Decimal:");
        scanf("%d", &a);
        dectobin(a);
        break;

    case 3:
        printf("\nEnter Value in Binary:");
        scanf("%d", &a);
        bintohex(a);
        break;

    case 4:
        printf("\nEnter Value in Hexadecimal:");
        
        scanf("%s", hexdec);
        hextobin(hexdec);
        break;

    default:
        printf("\nEnter a valid choice");
        break;
    }
    return 0;
}