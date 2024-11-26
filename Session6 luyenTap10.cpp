#include <stdio.h>
int main(){
    int n;
    int prime=1;
    printf("Moi nhap vao n: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("n khong phai so nguyen to");
            prime++;
        }
    }
    if(prime==1){
    printf("n la so nguyen to");
    }
}
