#include <stdio.h>

int main() {
   int n, i = 1, x, y;
   scanf("%d", &n);

   while(n){
       scanf("%d%d", &x,&y);
       printf("Case %d: %d\n", i, x+y);
       i++;
       n--;
   }

   return 0;
}
