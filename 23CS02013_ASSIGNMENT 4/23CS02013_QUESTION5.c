#include<stdio.h>
void main()
{
    int a;
    printf("Enter a three digit number between 100 to 999");
    scanf("%d",&a);
    int x= a/100;
    int y=(a-(x*100))/10;
    int z =(a-(x*100)-(y*10));
    int t=(x*x*x)+(y*y*y)+(z*z*z);
    if(t==a)
    {
        printf("number is Armstrong number",a);
        }
        else
        {
            printf(" number is not an Armstrong number ",a);
        }
    
}