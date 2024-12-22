#include<stdio.h>

int main(){
	float number1,number2;
	int chon;
	printf("Nhap so thu nhat: ");
	scanf("%f", &number1);
	printf("Nhap so thu hai: ");
	scanf("%f", &number2);
	
	do{
		printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);
        switch (chon){
            case 1:
                printf("Tong: %.2f\n", number1 + number2);
                break;
            case 2:
                printf("Hieu: %.2f\n", number1 - number2);
                break;
            case 3:
                printf("Tich: %.2f\n", number1 * number2);
                break;
            case 4:
                if (number2 != 0){
                	printf("Thuong: %.2f\n", number1 / number2);
                } else {
                    printf("Khong the chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }while(chon != 5);
    return 0;            
	}
	
