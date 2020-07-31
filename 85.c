/*
              *
              *
            * * *
            * * *
          * * * * *
          * * * * *
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);
  int loop=-1;
  for(i=1;i<=2*n;i++){
    loop+=i%2;
    for(j=1;j<=2*n-1;j++){
      if(j>=n-loop && j<=n+loop)
        printf("*");
      else
        printf(" ");
    }printf("\n");
  }
}
