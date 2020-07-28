/*
              **********
              ****  ****
              ***    ***
              **      **
              *        *
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=1;j<=2*n;j++){
      if(j<=n-i || j>n+i)
        printf("*");
      else
        printf(" ");
    }printf("\n");
  }
}
