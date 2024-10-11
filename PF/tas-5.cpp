#include<stdio.h>

int main(){
	int size;
	printf("Enter the size of an array\n");
	scanf("%d",&size);
	int a[size];
	for(int i = 0; i < size; i++){
		printf("Enter the number");
		scanf("%d",&a[i]);
	}
	for(int i = size - 1; i >= 0 ; i--){
		printf("%d , ",a[i]);
	}
	
	return 0;
}