#include<stdio.h>

int main() {
     int a,b;
     a=13;
     b=17;
     //operationforadditionassignment//
     printf("a+=b=%d\n",a+=b);
     //operationforsubtractionassignment//
     printf("a-=b=%d\n",a-=b);
     //operationfordivisionassignment//
     printf("a/=b=%d\n",a<=b);
     //operationformultiplicationassignment//
     printf("a*=b=%d\n",a*=b);
     //operationformodulusassignment//
     printf("a%=b=%d\n",a%=b);
     //operationforassignment//
     printf("a=b=%d\n",a=b);
     return 0;
     }

output
a+=b=30
a-=b=13
a/=b=1
a*=b=221
a=b=0
a=b=17