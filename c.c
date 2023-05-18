#include<stdio.h>
 void ter(int a){

     int mod ;
     mod = a%3;
     a=a/3;

     if(a!=0){

        ter(a);

        printf("%d",mod);
     }
     else printf("%d",mod);



 }
int main(){

    int a;

    while(scanf("%d",&a)==1)
    {
        if(a<0)
            break;

        ter(a);
        printf("\n");
    }

    return 0;





}
