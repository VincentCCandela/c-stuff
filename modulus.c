#include <stdlib.h>
#include <stdio.h>

void checker();
void adder();

int main(){
    int a,b,c,d;

    printf("input a number: ");
    scanf("%d",&a);

    printf("input an integer divisor: ");
    scanf("%d",&b);

    c = a % b; 

    if (c != 0){
        if(c<0){
            c += b;
        }
        printf("The number does not divide evenly. The remainder is: %d \n",c);
    }
    else{
        printf("The number divides evenly. \n");
    }

    d = a;

    while(d % b != 0){
        d++;
    }

    printf("The next number divisible by %d is %d \n", b, d);
    return 0;
}