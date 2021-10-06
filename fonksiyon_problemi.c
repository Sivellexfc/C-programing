#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{   
    int top;
    int f,h,g;
    int x = 0;
    float ort;

    for (x==0;x<=100;x++)
        {
            
            f = (3*x-1);
            g = (f*f)+(2*f)-3;
            h = g;
            top += g;

            if (h>2870)
            {   
                break;
            }
           
            printf("x = %d olduğunda h değeri = %d\n",x,h);
            printf("x = %d olduğunda toplam değer = %d\n\n",x,top);

        }

    ort = (top-h)/x;
    printf("Ort = %.3f",ort);
    










    return 0;
}