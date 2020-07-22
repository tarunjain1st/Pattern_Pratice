/*
  E D C B A
   D C B A
    C B A
     B A
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
    }for(j=n-i;j>=0;j--){
      printf("%C ",64+j+1);
    }printf("\n");
  }
}
