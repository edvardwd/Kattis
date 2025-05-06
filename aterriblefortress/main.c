#include <stdio.h>

int main(){
   int n, b, T = 0;
   scanf("%d", &n);

   for (int i = 0; i < n; ++i){
        scanf("%d", &b);
        T += b;
   }
   printf("%d\n", T);
   return 0;
}