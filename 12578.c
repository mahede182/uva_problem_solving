
#include <stdio.h>
int main(){
int i=0,t;
double pi=3.1415926535897932,l,w,areaOfCircle,areaOfRectangle,r;
scanf("%d",&t);
while(i<t){

        scanf("%lf",&l);
        w = l*0.6;
        r = l/5.0;

        areaOfCircle = pi * r *r;
        areaOfRectangle = l*w;
        printf("%0.2lf %0.2lf\n",areaOfCircle,(areaOfRectangle-areaOfCircle));
    i++;
}

return 0;



}
