#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *v,int value,int l,int r)
{
    int middle=(l+r)/2;

    if(value == v[middle])
        return middle;

    if(v[middle]>value)
        return binarySearch(v,value,l,middle);
    else
        return binarySearch(v,value,middle,r);
}


int main(void)
{
    int a[5] = {1,2,3,4,5};

    printf("%d\n",binarySearch(a,5,0,5));

}
