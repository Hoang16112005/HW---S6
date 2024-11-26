#include <stdio.h>
int main(){
    int n;
    printf("nhap vao so nguyen bat ki: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("uoc cua n la: %d\n",i);
        }
    }
}
