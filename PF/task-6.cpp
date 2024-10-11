#include<stdio.h>
int main(){
	
	
	int size; printf("Enter the size of an array\n"); scanf("%d",&size);
	int a[size];
	for(int i = 0; i < size; i++){
		printf("Enter the number");
		scanf("%d",&a[i]);
	}
	int l = a[0];
	int s = a[0];
	for(int i = 0; i < size; i++){
		if(a[i] >= l){
			l = a[i];
		}
	}
	for(int i = 0; i < size; i++){
		if(a[i] <= s){
			s = a[i];
		}
	}
	printf("largest = %d",l);
	printf("smallest = %d",s);
	
	
	
	return 0;
}