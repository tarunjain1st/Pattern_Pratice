/*
              A       E
                B   D
                  C
                B   D
              A       E
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j==i || j==n-i+1)
        printf("%c ",64+j);
      else
        printf("  ");
    }printf("\n");
  }
}
