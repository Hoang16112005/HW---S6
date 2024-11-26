#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if(a==0){
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);
    }
    else{
	float delta = b*b - 4*a*c;
	if (delta > 0){
		printf("%f%f", (-b + sqrt(delta)) / (2*a), (-b - sqrt(delta)) / (2*a));
	}
	else if (delta == 0){
		printf("%f", -b / 2*a);
	}
	else{
		printf("No no");
	}
	return 0;
 }
}
