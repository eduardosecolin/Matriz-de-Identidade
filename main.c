#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m[5][5]={{0}};
   int i,j;
    for(i=0;i<5;i++){
       for(j=i;j<5;j++){
           m[i][j] = 1;
       }
    }
     for(i=0;i<5;i++){
       for(j=i;j<5;j++){
           m[j][i] = 2;
       }
    }
    for(i=0;i<5;i++){
        m[i][i]= 5;
    }
      for(i=0;i<5;i++){
       for(j=0;j<5;j++){
           printf("%d ",m[i][j]);
       }
       printf("\n");
   }

    return 0;
}
