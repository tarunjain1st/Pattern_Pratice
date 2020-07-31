/*
              * * *
              * * *
              * *
              * *
              *
              *
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);
  int loop=n;
  for(i=1;i<=2*n;i++){
    loop-=i%2;
    for(j=0;j<=loop;j++){
      printf("*");
    }printf("\n");
  }
}
