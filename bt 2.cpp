#include<stdio.h>

int main(){
	int target = 5;
	int input;
	
	do{
		printf("Nhap vao môt so bat ki: ");
		scanf("%d", &input);
		if(input != target){
			printf("so ban nhap ko trung voi so cho trc. \n");
		}
	}while(input != target);
	printf("so ban nhap trung voi so cho trc. \n");
	return 0;
}
	
