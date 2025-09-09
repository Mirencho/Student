#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
    float x1,x2,px,a,b,c,e;
    float x,F;
    int n;
    // cls;
    printf("input x1 : ");
    scanf("%f", &x1);
    printf("input x2 : ");
    scanf("%f", &x2);
    printf("input px : ");
    scanf("%f", &px);
    printf("input a : ");
    scanf("%f", &a);
    printf("input b : ");
    scanf("%f", &b);
    printf("input c : ");
    scanf("%f", &c);
    x=x1;
    n=0;
    printf("\n\t Results : \n"); // puts("\n \t Results : ");
    while(x<x2)
    {
        n=n + 1;
        if((x<b)  && (c  !=0))
        {
            F= (c*log(a*x)-(x*x) / (a+c));
        }
        else if (x>b && c==0);
        {
            F= (x-log(x*x) / (b-pow(cos(x),2))*(a*c));
        }

        {
            F= (((a+x)/(c*c))+(M_E*log(3)));
        }
        printf("%i: x= %.3f \t F= %.3f \n", n,x,F);
        x = x+px;
    }
    getch();
    return 0;
}