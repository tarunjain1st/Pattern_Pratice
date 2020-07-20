/*
    D
    DC
    DCB
    DBCA
    DCB
    DC
    D
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=0;i<2*n+1;i++){
    for(j=n;j>=abs(n-i);j--){
      printf("%c",65+j);
    }printf("\n");
  }
}
