#include <stdio.h>
int main(){
    int i;
    for(i=1;i<101;i++)
    if(i%5==0){
        if(i%3==0){
            printf("fizzbuzz\n");
        }
        else{
        printf("buzz\n");
        }
    }
    else if(i%3==0){
        printf("fizz\n");
    }
}
