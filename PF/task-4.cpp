#include<stdio.h>

int main(){
	printf("Enter the size of an array\n");
	int size;
	int sum = 0;
	scanf("%d",&size);
	int a[size];
	for(int i = 0; i < size; i++){
		printf("Enter the number\n");
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < size; i++){
		sum = sum + a[i];
	}
	printf("sum = %d",sum);
	return 0;
}