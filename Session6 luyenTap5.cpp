#include <stdio.h>
int main(){
    int month,year;
    printf("moi nhap vao thang, nam: ");
    scanf("%d %d",&month,&year);
    if(year%4==0&&year%100!=0||year%400==0){
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("nam %d thang %d co 31 ngay",year,month);
        break;
        case 2: 
        printf("nam %d thang %d co 29 ngay",year,month);
        break;
        case 4: case 6: case 9: case 11:
        printf("nam %d thang %d co 30 ngay",year,month);
        break;
        default:
        printf("thang khong hop le");
        }   
    }
    else{
        switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("nam %d thang %d co 31 ngay",year,month);
        break;
        case 2: 
        printf("nam %d thang %d co 28 ngay",year,month);
        break;
        case 4: case 6: case 9: case 11:
        printf("nam %d thang %d co 30 ngay",year,month);
        break;
        default:
        printf("thang khong hop le");
        }
    }
