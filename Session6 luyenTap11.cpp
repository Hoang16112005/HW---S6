#include <stdio.h>
int main(){
    int n;
    printf("Moi nhap vao n: ");
    scanf("%d",&n);
    int count=0;
    int number=0;
    int prime=2;
    while(number<n){
        count=0;
        for(int i=1; i<=prime;i++){
            if(prime%i==0){
                count++;
            }
        }
        if(count==2){
            printf("\nso nguyen to %d",prime);
            number++;
        }
        prime++;
    }
}
