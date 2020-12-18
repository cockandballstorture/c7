#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int x,i;
    float y;
    char *p;
    char h[255];
    char q[5]="STOP";
    x=0;
    y=0;
    scanf("%s",h);
    if (strcmp(h,q)!=0){
      p = (char*) malloc(strlen(h) * sizeof(char));
      *p=h;
      x=1;
      y=strlen(h)+y;
      for(i=0;i<strlen(h);i++){
            h[i]=0;
        }
      
    }
    else{
        exit(0);
        x=0;
        y=0;
    }
    while(1==1){
        scanf("%s",h);
        if (strcmp(h,q)!=0){
        x++;
        p = (char*) realloc(p,strlen(h) * sizeof(char));
        *p=h;
        y=y+strlen(h);
        }
        else{
        y=y/x;
        printf("%d,%f",x,y);
        free(p);
        exit(0);
        }
        for(i=0;i<strlen(h);i++){
            h[i]=0;
        }
    }
}
