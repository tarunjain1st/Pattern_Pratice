/*
              O O O O O
              X O O O O
              X X O O O
              X X X O O
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
      if(j<i)
        printf("X ");
      else
        printf("O ");
    }printf("\n");
  }
}
