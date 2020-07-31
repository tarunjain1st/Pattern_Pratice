/*
              *
              *
              * *
              * *
              * * *
              * * *
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n,loop=0;
  printf("Enter n : ");
  scanf("%d",&n);
  for(i=1;i<=2*n;i++){
    loop+=i%2;
    for(j=1;j<=loop;j++){
      printf("*");
    }printf("\n");
  }
}
