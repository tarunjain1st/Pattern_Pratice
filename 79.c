/*
            * * * * * *
            * * * * * *
            * * * *
            * * * *
            * *
            * *
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,k,n;
  printf("Enter n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=2;j++){
      for(k=1;k<=2*(n-i+1);k++){
        printf("* ");
      }printf("\n");
    }
  }
}
