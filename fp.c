#include<stdio.h>
int main(void){
    int a, b, c;
    a=1;
    b=2;
    c=3;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a = %d b = %d", a, b);
    printf("\n%d",c);
    return 0;
}
