#include<stdio.h>

int main(){
	int n;
	int sum=0;
	 do{
	 	printf("Nhap vao so nguyen duong: ");
	 	scanf("%d", &n);
	 	
	 	if(n<=0){
	 		printf("hay nhap mot so nguyen duong lon hon 0: ");
	 	}
	}while(n<=0);
	 	for(int i=1; i<=n; i++){
	 		sum += i;
	 	}
	 	printf("Tong so nguyen tu 1 den %d la: %d\n", n, sum);
	return 0;
}	
	 
