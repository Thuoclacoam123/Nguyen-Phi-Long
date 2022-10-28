#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//tinh dien tich tam giac

int main(int a, int b, int c)
{
  return a+b+c;
}
float tinhDienTich(int a, int b, int c){
    int P = main(a, b, c);
    float p = P/2.0;
     
    float S = sqrt(p * (p-a) * (p-b) *(p-c));
     
    return S;
}
int tichDientich()
{
    int a, b, c;
    printf("Nhap lan luot 3 canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);
      
    float S = tinhDienTich(a,b,c); 
    printf("Dien tich hinh tam giac la: %.2f", S);
}
