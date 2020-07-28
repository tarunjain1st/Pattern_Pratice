/*
              **********
              ****  ****
              ***    ***
              **      **
              *        *
              **      **
              ***    ***
              ****  ****
              **********
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=2*n-1;i++){
    for(j=1;j<=2*n;j++){
      if((j<=n-i+1 || j>=n+i) && i<=n)
        printf("*");
      else if((j<=i-n+1 || j>=3*n-i) && i>n)
        printf("*");
      else
        printf(" ");
    }printf("\n");
  }
}
