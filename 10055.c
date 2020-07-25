//problem 10055-Hashmat the brave warrior
#include <stdio.h>
int main(){
    long long int hasmat,opponent;//int range -2^32 to 2^32
    while(scanf("%lld%lld",&hasmat, &opponent)!= EOF){
         if(hasmat<opponent){
        printf("%lld\n",hasmat-opponent);
    }
    else
    {
        printf("%lld\n",hasmat-opponent);
    }
    }
}
