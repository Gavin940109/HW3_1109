#include<stdio.h>

double pow(int base,int exponent){
    if(exponent == 0){
		return 1;
    } 
	else {
        return base * pow(base,exponent-1);
    }
}

int main(){
    int base,r;
    int exponent;
	printf("Input base: ");
    scanf("%d",&base);
	printf("Input exponet: ");
	scanf("%d", &exponent);

	r = pow(base, exponent);
    printf("pow(%d,%d) = %d\n",base,exponent,r);
}