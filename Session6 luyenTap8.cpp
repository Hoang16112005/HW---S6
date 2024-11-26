#include <stdio.h>
int main() {
    float interestRate,profit,originalDeposit,deposit,month;
    printf("Tien ban dau: ");
    scanf("%f",&deposit);
    originalDeposit=deposit;
    printf("lai suat: ");
    scanf("%f",&interestRate);
    printf("Thang gui: ");
    scanf("%f",&month);
    for(int i=0;i<month;i++){
        profit=deposit+(interestRate/100*deposit);
        deposit=profit;
    }
    printf("Tien lai: %.3f\n",deposit-originalDeposit);
    printf("Tien nhan duoc: %.3f\n",profit);
}
