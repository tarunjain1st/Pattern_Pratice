/*
              1
             1 1
            1 2 1
           1 3 3 1
          1 4 6 4 1
         1 5 10 10 5 1
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n,sum;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=n;j>i;j--){
      printf(" ");
    }
    for(j=0;j<=i;j++){
      if(j==0)
       sum=1;
      else
        sum=sum*(i-j+1)/j;
      printf("%d ",sum);
    }printf("\n");
  }
}
