/*
    A
    A B
    A B C
    A B C D
    A B C D E
*/
#include <stdio.h>

int main(){

  int n,i,j;
  printf("enter n : ");
  scanf("%d", &n);

  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf("%C ",64+j);
    }printf("\n");
  }
}
