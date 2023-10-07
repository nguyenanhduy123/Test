#include<stdio.h>
#include<stdlib.h>

void capphat(int *pt)
{
    pt = calloc(10,sizeof(int));
    
}

int main()
{
    int *contro;
    capphat(contro);
    *contro = 1;
    printf("%d\n", *contro);
    return 0;
}

int *capphat(void)
{
    int *pt;
    pt = calloc(10,sizeof(int));
    return pt;
    //return calloc(10,sizeof(int));
    
}

int main()
{
    int *contro;
    contro = capphat();
    *contro = 1;
    printf("%d\n", *contro);
    return 0;
}