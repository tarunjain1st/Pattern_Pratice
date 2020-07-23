/*
      1
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
   1 2 3 4
    1 2 3
     1 2
      1
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=2*n-1;i++){
    for(j=0;j<abs(n-i);j++){
      printf(" ");
    }for(j=n;j>abs(n-i);j--){
      printf("%d ",n-j+1);
    }printf("\n");
  }
}
