/*
                  *        *
                  **      **
                  ***    ***
                  ****  ****
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

  for(i=1;i<=2*n-1;i++){
    for(j=1;j<=2*n;j++){
      if((j<=i || j>=2*n-i+1) && i<=n)
        printf("*");
      else if((j<=2*n-i || j>i) && i>n)
        printf("*");
      else
        printf(" ");
    }printf("\n");
  }
}
