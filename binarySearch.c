#include <stdio.h>
#include <stdlib.h>

int pesquisaBinaria (int *vet, int target, int r)
{
     int l = 0;     
     int meio;
     while (l <= r)
     {
          meio = (l + r)/2;
          if (target == vet[meio]){
               return meio;
          }
              
          if (vet[meio] < target){
               l = meio+1;
          }
               
          else{
               r = meio;
          }
               
     }
     return -1; 
}

int main(void)
{
    int a[5] = {1,2,3,4,5};

    printf("%d\n", pesquisaBinaria(a, 5, 4));

}