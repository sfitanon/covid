#include<stdio.h>
#include "fsf.h"
int main(){
	int ch=0, n,i,f,sum;
	while(ch!=4){
	printf("\n1. Sum 2. Factorial 3. Factor 4. Exit\n");
	scanf("%d", &ch);
	printf("Enter n: ");
	scanf("%d",&n);
	switch(ch){
		case 1: sum(n);
			    break;
		case 2: factorial(n);
				break;
		case 3: factor(n);
				break;
		case 4: break;
   }
   }
	return 0;

}