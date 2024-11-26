#include <stdio.h>

int main(){
	int a[1000];
	int sum = 0;
	int n = 5;
    for (int i = 0; i < n; i++){
    	printf("Enter random number: ");
    	scanf("%d", &a[i]);
	    if(a[i] % 2 != 0){
		sum += a[i];
		}

	}
	printf ("%d", sum);
	return 0;
}
