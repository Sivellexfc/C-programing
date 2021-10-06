#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main ()
{
    
    float delta,x,kok1,kok2;
    float k,a,b,c;

    printf("x^2nin katsayısının giriniz = "); scanf("%f",&a);
    printf("x'in katsayısının giriniz = "); scanf("%f",&b);
    printf("sabit terimi giriniz = "); scanf("%f",&c);

    delta = (b*b)-(4*a*c);

    if (delta == 0)
        {
            k = sqrt(delta);
            kok1 = ((-1*b)-k)/2;
            kok2 = ((-1*b)+k)/2;
            printf("Kok 1 =%.3f",kok1);
            printf("Kok 2 =%.3f",kok2);
        }   
    
     if (delta > 0)
        {
            k = sqrt(delta);
            kok1 = ((-1*b)-k)/2;
            kok2 = ((-1*b)+k)/2;
            printf("Kok 1 =  %.3f\n",kok1);
            printf("Kok 2 =  %.3f",kok2);
        }   
    
    if (delta < 0)
    {
        printf("Reel kok yoktur.");
    }
    
    










    return 0;
}