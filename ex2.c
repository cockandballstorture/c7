#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int aaa(int*p,int x){
    int i;
    srand(time(NULL));
    for(i=0;i<x;i++){
        p[i]=(rand()%8)-2;
    }
}
void main()
{
    int x,i;
    scanf("%d",&x);
    int *p = NULL;
    p = (int*) malloc(x*sizeof(int));
    aaa(p,x);
    for(i=0;i<x;i++){
        printf("%d\n",p[i]);
    }
    free(p);
}
