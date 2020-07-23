/*
      1
     2 2
    3 3 3
   4 4 4 4
  5 5 5 5 5
   4 4 4 4
    3 3 3
     2 2
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
      printf("%d ",n-abs(n-i));
    }printf("\n");
  }
}
