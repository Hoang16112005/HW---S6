#include <stdio.h>

int main(){
	int countEven = 0;
	int countOdd = 0;
	int a[1000];
	int n = 5;
	for (int i = 0; i < n; i++){
		printf("Enter random number: ");
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0){
			countEven++;
		}
		if(a[i] % 2 != 0){
			countOdd++;
		}
	}
	printf("Amount of Even number: %d \n", countEven);
	printf("Amount of Odd number: %d", countOdd);
	return 0;
}

