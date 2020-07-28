/*
              5       5
                4   4
                  3
                2   2
              1       1
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
        printf("%d ",n-i+1);
      else
        printf("  ");
    }printf("\n");
  }
}
