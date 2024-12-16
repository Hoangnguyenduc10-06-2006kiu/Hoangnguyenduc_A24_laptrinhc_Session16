#include <stdio.h>
void sum();
int main(){
	int num1=10,num2=15;
	sum(&num1,&num2);
	return 0;
}
int sum(int *a,int *b){
	printf("tong 2 so la %d",*a+*b);
}
