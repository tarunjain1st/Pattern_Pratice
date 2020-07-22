/*
  5 4 3 2 1
   4 3 2 1
    3 2 1
     2 1
      1
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
      printf("%d ",j+1);
    }printf("\n");
  }
}
