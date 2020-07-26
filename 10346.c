// problem 10346 peter smooke
/* 

* n cigarrete, keeping all,k>1 then he replace a new cigarrete

 */
#include<stdio.h>
#include<string.h>
int main(){
    int n, k, total;
    while(scanf("%d%d")==2){
        total = n;

        while (n>=k)
        {
            int renew = n/k;
            total = total + renew;

            n=renew + (n%k);
        }
        printf("%d\n",total);
    }
    return 0;
}