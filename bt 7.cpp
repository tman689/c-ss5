#include<stdio.h>

int timUCLN(int a, int b) {
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
	int number1, number2;
	printf("Nhap so nguyen duong thu nhat: ");
	scanf("%d", &number1);
	printf("Nhap so nguyen duong thu hai: ");
	scanf("%d", &number2);
	
	if(number1>0 && number2>0){
		int ucln = timUCLN(number1, number2);
        printf("Uoc chung lon nhat cua %d và %d la: %d\n", number1, number2, ucln);
    }else{
    	printf("Vui long nhap hai so nguyen duong hop le. \n");
    }
	return 0;
}
