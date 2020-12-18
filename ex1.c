#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
    int x,y,i,j,e;
    scanf("%d",&x);
    scanf("%d",&y);
    int a[x][y];
    int *p=(int*)a;
    e=x*y;
    p=(int *)malloc(e*sizeof(int));
    srand(time(NULL));
    for(i=0;i<y;i++){
        for (j=0;j<x;j++){
          p[i]=rand();
          printf("%d  ",*p);
        }
      printf("\n");
    }
    free(p);
}
