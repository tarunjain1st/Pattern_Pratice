/*
                 *      *
                ***    ***
               *****  *****
              **************
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=1;j<=2*(2*n-1);j++){
      if((j<n-i || j>n+i) && (j<3*n-i-1 || j>3*n+i-1))
        printf(" ");
      else
        printf("*");
    }printf("\n");
  }
}
