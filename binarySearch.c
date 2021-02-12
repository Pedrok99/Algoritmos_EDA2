#include <stdio.h>
#include <stdlib.h>

int pesquisaBinaria (int *vet, int target, int r)
{
     int l = 0;     
     int meio;
     while (l <= r)
     {
          meio = (l + r)/2;
          if (target == vet[meio])
               return meio;
          if (target < vet[meio])
               r = meio-1;
          else
               l = meio+1;
     }
     return -1; 
}