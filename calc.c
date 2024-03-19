#include <stdio.h>
#include "header.h"

int main(){
    while(1){
        printf("Welcome to calculator App!\n");
        printf("1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Exit\n");
        printf("Enter the choice to perform the operation: \n");
        int ch;
        scanf("%d", &ch);
        float a,b;
        if(ch == 5) break;
        printf("Enter two numbers: \n");
        scanf("%f%f", &a, &b);

        if(ch == 1){
            add(a,b);
        }else if(ch == 2){
            sub(a,b);
        }else if(ch == 3){
            mul(a,b);
        }else if(ch == 4){
            div(a,b);
        }else{
            printf("Enter the Correct input!!!\n");
        }
        printf("\n\n\n");
    }
}