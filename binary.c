#include <stdio.h>



void binary1(int n){
	if(n < 2) printf("%d",n);
	else{
		binary1(n/2);
		printf("%d",n%2);
	}

}

void binary2(int n){
	long a = 0x80000000;
	int i;
	for(i=0;i<32;i++){
	if((a&n)==a)
		printf("1");
	else
		printf("0");
	a >>= 1;
	}
}


int main(void){
	int num;
	printf("정수입력 : ");
	scanf("%d\n",&num);
	binary1(num);
	printf("\n");
	binary2(num);
	printf("\n");
	return 0;
}
