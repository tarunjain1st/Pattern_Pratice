/*
              O X X X X
              X O X X X
              X X O X X
              X X X O X
              X X X X O
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j==i)
        printf("O ");
      else
        printf("X ");
    }printf("\n");
  }
}
