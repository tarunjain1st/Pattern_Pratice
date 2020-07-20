/*
   D
  CD
 BCD
ABCD
 BCD
  CD
   D
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=0;i<=2*n+1;i++){
    for(j=1;j<=abs(n-i);j++){
      printf(" ");
    }for(j=abs(n-i);j<=n;j++){
      printf("%c",65+j);
    }printf("\n");
  }
}
