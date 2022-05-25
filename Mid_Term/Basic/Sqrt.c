#include <stdio.h>
void main() {
    long double a,deci;
    printf("Enter No. :\n");
    scanf("%Lf%Lf",&a,&deci);
    int out=0;

    for (int i = 0;i <= a; i++){
        if( i*i<=a){
            out=i;
        }
        
    }
    long double ans=out;
    long double d=0.1;
    while ( deci>0){
        for(int i =0;i<=8;i++){
        if ((ans+d)*(ans+d)<=a){
            ans+=d;
            
        }}
        d/=10;
        deci--;
    }
    printf("%Lf",ans);
    // sqrt(a)
}