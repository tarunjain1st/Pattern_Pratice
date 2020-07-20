/*
    3
    32
    321
    3210
    321
    32
    3
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=0;i<2*n+1;i++){
    for(j=n;j>=abs(n-i);j--){
      printf("%d",j);
    }printf("\n");
  }
}
