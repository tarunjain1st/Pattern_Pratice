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
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);
  int space=-1;
  for(i=1;i<=2*n;i++){
    space+=i%2;
    for(j=0;j<=n;j++){
      if(j>space)
        printf("*");
      else
        printf(" ");
    }printf("\n");
  }
}
