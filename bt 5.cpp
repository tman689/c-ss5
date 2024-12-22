#include<stdio.h>

int main(){
	for(int number=1; number<=9; number++){
		printf("Bang cuu chuong tu 1 den 9 là %d:\n", number);
		for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", number, i, number * i);
        }
    }
    return 0;
}
