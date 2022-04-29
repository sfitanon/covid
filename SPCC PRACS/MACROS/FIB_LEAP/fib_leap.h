#define fib(n) a=0; b=1; printf("%d %d ", a,b); for(i=2;i<n;i++){temp = a; a = b; b = temp+b; printf("%d ", b); }

#define prime(n) a=0; if(n==2){printf("prime");  return 0;} for(i=2;i<n;i++){if(n%i==0) {a++;}} if(a==0){printf("prime");}else{printf("not prime");}

#define leap(n) if (((n%4==0) && (n%100!=0)) || (n%400==0)) {printf("Leap Year");}else{printf("Not Leap");}