/*
  A B C D E
   A B C D
    A B C
     A B
      A
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<i;j++){
      printf(" ");
    }for(j=0;j<=n-i;j++){
      printf("%C ",65+j);
    }printf("\n");
  }
}
