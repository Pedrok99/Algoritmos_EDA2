#include <stdlib.h>
#include <stdio.h>

#define less(A, B) ((A) < (B))
#define lesseq(A, B) ((A) <= (B))
#define exch(A, B) \
  {                \
    int tmp = A;   \
    A = B;         \
    B = tmp;       \
  }
#define cmpexch(A, B) \
  {                   \
    if (less(B, A))   \
      exch(A, B);     \
  }

void merge(int *v, int l, int m, int r)
{
  int ia = l, ib = m + 1, ic = 0, tc = r - l + 1;
  int *c;
  c = malloc(tc * sizeof(int));

  while (ia <= m && ib <= r)
  {
    if (v[ia] < v[ib])
    {
      c[ic] = v[ia++];
    }
    else
    {
      c[ic] = v[ib++];
    }
    ic++;
  }

  while (ia <= m)
  {
    c[ic++] = v[ia++];
  }

  while (ib <= r)
  {
    c[ic++] = v[ib++];
  }

  for (ic = l; ic <= r; ic++)
  {
    v[ic] = c[ic - l];
  }

  free(c);
}
void mergesort(int *v, int l, int r)
{
  if (l >= r)
  {
    return;
  }
  int m = (l + r) / 2;
  mergesort(v, l, m);
  mergesort(v, m + 1, r);
  merge(v, l, m, r);
}

int main(void)
{
 int v[1000];
    int count = 0; 
  while(scanf("%d",&v[count]) == 1)
        count++;
  mergesort(v, 0, count);
  for (int i = 0; i < count; i++)
  {
    printf("%d ", v[i]);
  }

  return 0;
}