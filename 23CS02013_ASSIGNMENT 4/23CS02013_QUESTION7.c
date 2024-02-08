#include<stdio.h>
int main()
{   int a;
    printf("enter your age ");
    scanf("%d",&a);
     if(a<5)
   { 
    printf("ticket is free");
    }
      else if(5<=a && 12>a)
   { 
    printf("ticket price 20");
    }
     else if(59>=a && a>12)
   { 
    printf("ticket price is 50");
    }
   else if(a>=60)
   { 
    printf("ticket price is 40 ");
    }
    

}
