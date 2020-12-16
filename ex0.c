#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
    int x,i;
    scanf("%d",&x);
    int *p = NULL;
    p = (int*) malloc(x);
    srand(time(NULL));
    for(i=0;i<x;i++){
        p[i]=rand();
        printf("%d\n",p[i]);
    }
    free(p);
}
