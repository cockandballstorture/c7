#include <string.h>
#include <stdlib.h>
void main()
{
    int x,i;
    char *p;
    char h[255];
    char q[5]="STOP";
    x=0;
    scanf("%s",h);
    if (strcmp(h,q)!=0){
      p = (char*) malloc(strlen(h) * sizeof(char));
      *p=h;
      x=1;
      for(i=0;i<strlen(h);i++){
            h[i]=0;
        }
      
    }
    else{
        exit(0);
        x=0;
    }
    while(1==1){
        scanf("%s",h);
        if (strcmp(h,q)!=0){
        x++;
        p = (char*) realloc(p,strlen(h) * sizeof(char));
        *p=h;
        }
        else{
        printf("%d",x);
        free(p);
        exit(0);
        }
        for(i=0;i<strlen(h);i++){
            h[i]=0;
        }
    }
}
