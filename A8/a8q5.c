#include<stdio.h>
int main(){
	int a;
	
	printf("enter the value of a");
	scanf("%d",&a);
	
	if(a>0){
		printf("positive");
	}
	else if(a<0){
		printf("negative");
	}
	else{
		printf("zero");
	}
	
	return 0;
}