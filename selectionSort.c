#include <stdio.h>
#include <stdlib.h>

#define less(A,B)((A)<(B))
#define lesseq(A,B)((A)<=(B))
#define exch(A,B){int tmp = A; A = B; B = tmp;}
#define cmpexch(A,B){if(less(B,A)) exch(A,B);}

// não inclusivo [l,r[
void selectionSort(int *v, int l, int r)
{
    int smaller = v[0];

    for(int i = l; i < r; i++)
        for(int j = i + 1; j < r; j++)
            cmpexch(v[i],v[j]);
}

int main(void)
{
    int v[1000];
    int count = 0;

    while(scanf("%d",&v[count]) == 1)
        count++;

    selectionSort(v,0,count);

    for(int i=0;i<count;i++)
        printf("%d ",v[i]);

    printf("\n");
    return 0;
}
