#include <stdio.h>
int main(){
    int n;
    int number=0;
    printf("Moi nhap vao n: ");
    scanf("%d",&n);
    printf("0, 1, ");
    int fn;
    int fn1=0;
    int fn2=1;
    while(number<n-2){
        fn = fn1 + fn2;
        printf("%d, ",fn);
        fn2 = fn1;
        fn1 = fn;
        number++;
    }
}
