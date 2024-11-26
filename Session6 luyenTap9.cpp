#include <stdio.h>
int main() {
    int n,originalN,r,sum;
    for (n=100;n<=1000;n++){
        originalN=n;
        sum = 0;
        while(originalN != 0) {
            r = originalN % 10;
            sum = sum+(r*r*r);
            originalN /= 10;
        }             
        if (sum == n) {
            printf("%d ", n);  
        }
    }
}
