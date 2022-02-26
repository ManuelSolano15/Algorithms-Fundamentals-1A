//Create an algorithm to determine if a number is prime or not.
#include <stdio.h>

int main(){
    int i, num, cont=0;
    printf ("put a number: ");
    scanf ("%i", num);

    for(i=1; i<=num; i++){
        if(num%i==0){
            cont++;
        }
    }

    if(cont<2){
        printf("The number is not prime");
    }
    else{
        printf("The number prime");
    }


    return 0;
}
