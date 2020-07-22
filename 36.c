/*
      A
     A B
    A B C
   A B C D
  A B C D E
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }for(j=1;j<=i;j++){
      printf("%c ",64+j);
    }printf("\n");
  }
}
