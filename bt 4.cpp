#include<stdio.h>

int main(){
	int number;
	printf("Nhap mot so nguyen duong: ");
	scanf("%d", &number);
	
	if(number>=1 && number<=10){
		printf("Bang cuu chuong cua %d:\n", number);
		for(int i=1; i<=10; i++){
			printf("%d x %d = %d\n ", number, i, number*i);
		}
	}else{
		printf("So khong hop le ! vui long nhap tu 1 den 10: %d");
	}
	return 0;
}
			
