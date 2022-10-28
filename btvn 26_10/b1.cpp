#include<stdio.h>

//tinh chu vi tam giac
int tinhChuVi(int a, int b, int c){
	return a + b + c;
}
int main(){
	int a , b , c;
	printf("Nhap lan luot 3 canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);
    int P= tinhChuVi(a,b,c);
    printf("Chu vi hinh tam giac la: %d", P);
}


