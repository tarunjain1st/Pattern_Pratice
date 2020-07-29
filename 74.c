/*
              X X X X X
              X X X X X
              X X O X X
              X X X X X
              X X X X X
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);
  int mid=(n+1)/2;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j==mid && i==mid)
        printf("O ");
      else
        printf("X ");
    }printf("\n");
  }
}
