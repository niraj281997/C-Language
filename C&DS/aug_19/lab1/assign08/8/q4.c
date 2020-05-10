#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[] = "1234";
  char str1[10]={'a','b','c','d','e','f','g','h'};
 char *ptr;
long st; 
    printf("ATOI =%d\n ", atoi(str));
    
    printf("ATOL =%ld\n ", atol(str));
    printf("ATOLL=%lld\n ", atoll(str));
    printf("ATOF=%f\n", atof(str1));
    printf("STRTOL=%ld\n ", strtol(str1,&ptr,10));
    printf("STRTOIMAX =%d \n ", strtoimax(str));

    printf("Strtoul =%ld\n ", strtoul(str,&ptr,10));
    printf("%f\n ", strtof(str,&ptr));
    printf("%f\n ", strtod(str,&ptr));
   return 0;
}
