#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
   long long unsigned int p,q,e;

    printf("Input a 'p' and a 'q': ");
    scanf("%llu %llu", &p, &q);
    printf("\nInput an 'e': (Hint: use 65537)");
    scanf("%llu", &e);
    
    printf("\n'p' 'q' and 'e' are: %llu %llu %llu \n", p, q, e);

    /*
    for(int i = 0; ;i++){

    }*/

    return 0;
}