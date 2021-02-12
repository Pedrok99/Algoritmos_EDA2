#include <stdlib.h>
#include <stdio.h>

#define less(A,B)((A)<(B))
#define lesseq(A,B)((A)<=(B))
#define exch(A,B){int tmp = A; A = B; B = tmp;}
#define cmpexch(A,B){if(less(B,A)) exch(A,B);}


void insertionSortSlow(int *v, int l, int r)
{
    for(int i=l+1;i<r;i++)
        for(int j=i;j>l;j--)
            cmpexch(v[j-1],v[j])

}

int main(void)
{
    int a[1000];
    int count=0;

    while(scanf("%d",&a[count])==1)
        count++;

    insertionSortSlow(a,0,count);

    for(int i=0;i<count;i++)
        printf("%d ",a[i]);

    printf("\n");



    return 0;
}
