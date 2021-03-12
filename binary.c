#include <stdio.h>



void binary1(int n){
	if(n < 2) printf("%d",n);
	else{
		binary1(n/2);
		printf("%d",n%2);
	}

}

void binary2(int n){

}


int main(void){
	int num;
	printf("정수입력 : ");
	scanf("%d\n",&num);
	binary1(num);
	return 0;
}
