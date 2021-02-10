#include <stdio.h>
#include <stdlib.h>

#define less(A,B)((A)<(B))
#define lesseq(A,B)((A)<=(B))
#define exch(A,B){int tmp = A; A = B; B = tmp;}
#define cmpexch(A,B){if(less(B,A)) exch(A,B);}

// não inclusivo [l,r[
void bubbleSort(int * v, int l, int r)
{
    for(int i = l; i < r; i++)
        for(int j = l; j < r - 1; j++)
            cmpexch(v[j],v[j+1]);
}

int main(void)
{
    int *a = malloc(1000 * sizeof(int));
    int count = 0;

    while(scanf("%d",&a[count]) == 1)
        count++;

    printf("%d\n", count);

    bubbleSort(a,0,count);

    for(int i = 0; i < count; i++)
        printf("%d ",a[i]);

    printf("\n");

    return 0;
}
