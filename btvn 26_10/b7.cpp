#include<stdio.h>
int main()
{
  int S = 0;
  int n = 0;
  while(S < 10000) {
    n++;
    S = S + n;
 }
  printf("\nSo nha nhat de tong tu 1 den n� lon hon 10000 l� %d",n);
  printf("\nTong c�c so tu 1 den %d l�: %d",n, S);
 
}
