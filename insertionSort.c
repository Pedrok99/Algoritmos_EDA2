#include <stdlib.h>
#include <stdio.h>

#define less(A,B)((A)<(B))
#define lesseq(A,B)((A)<=(B))
#define exch(A,B){int tmp = A; A = B; B = tmp;}
#define cmpexch(A,B){if(less(B,A)) exch(A,B);}


void insertionSort(int *v, int l, int r)
{
    for(int i=r-1;i>l;i--)
        cmpexch(v[i-1],v[i]);

    for(int i=l+2;i<r;i++)
    {
        int j=i;
        int tmp=v[j];

        while(less(tmp, v[j-1]))
        {
            v[j]=v[j-1];
            j--;

        }

        v[j]=tmp;
    }

}


int main(void)
{
    int a[1000];
    int count=0;

    while(scanf("%d",&a[count])==1)
        count++;


    insertionSort(a,0,count);

    for(int i=0;i<count;i++)
        printf("%d ",a[i]);

    printf("\n");



    return 0;
}
