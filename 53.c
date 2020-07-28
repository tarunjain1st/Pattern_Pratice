/*
                  E
                 D D
                C   C
               B     B
              A       A
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }for(j=1;j<=2*i-1;j++){
      if(j==1 || j==2*i-1)
        printf("%c",64+n-i+1);
      else
      printf(" ");
    }printf("\n");
  }
}
