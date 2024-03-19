#include <stdio.h>
#include "header.h"
void div(float a, float b){
    if(b == 0){
        printf("Zero Division is not possible!!!\n");
        return;
    }
    printf("%f divided by %f is equal to %f\n", a,b,a/b);
}