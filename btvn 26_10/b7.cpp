#include<stdio.h>
int main()
{
  int S = 0;
  int n = 0;
  while(S < 10000) {
    n++;
    S = S + n;
 }
  printf("\nSo nha nhat de tong tu 1 den nó lon hon 10000 là %d",n);
  printf("\nTong các so tu 1 den %d là: %d",n, S);
 
}
