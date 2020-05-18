//#include <stdio.h>
#include <stdlib.h>

int checker(){

}

adder(){

}

int main (void) {
    printf("What's poppin? \n");
    
    int x,y;
    int *px; 
    
    x = 7;

    px = &x;
    printf("The address of x is: %p\n" , px);
    printf("The value of x is: %d\n" , *px);

    x++;

    printf("%d\n" , *px);

    if(*px % 3 != 0){
        printf("oops, x is not divisible by 3! \n");

    }
}