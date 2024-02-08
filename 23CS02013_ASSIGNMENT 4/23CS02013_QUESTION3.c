#include<stdio.h>
int main(){
    float a,b;
    printf("enter the credit score and current balance:");
    scanf("%f %f",&a,&b);
    if(a<=600)
    {
        float c;
        c=b*15/100;
        printf("%f is calculated interest",c);
    }
    else if (a<=750 && a>650)
    {
    float d;
    d=b*12/100;
    printf("%f is the calculated interest",d);
    }
    else if (a>750)
    {
        float e;
        e=b*10/100;
        printf("%f is the calculated interest",e);
    }
    return 0;


}