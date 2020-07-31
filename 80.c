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
  int i,j,n,space=-2;
  printf("Enter n : ");
  scanf("%d",&n);
  for(i=1;i<=2*n;i++){
    space+=2*(i%2);
    for(j=1;j<=2*n;j++){
      if(j>space)
        printf("*");
      else
        printf(" ");
    }printf("\n");
  }
}
