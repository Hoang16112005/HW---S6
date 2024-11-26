#include <stdio.h>
int main(){
    int password=1234;
    int answer;
    printf("moi nhap vao mat khau: ");
    scanf("%d",&answer);
    if(answer!=password){
        printf("Mat khau sai");
    }
    else{
        printf("Mat khau dung");
    }
}
