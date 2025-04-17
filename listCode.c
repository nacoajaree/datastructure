// test file
#include <stdio.h>
int main(){
    int  a;
    int  b;
    printf("input a and b"); scanf("%d %d",&a,&b);
    if (a==b)
       printf("The result a*b %d\n",a*b);
    else  
       if (a < b) printf("Result = a+b %d\n",a+b);
       else 
       printf("Result = a-b %d\n",a-b);
    printf("Bye ");
}