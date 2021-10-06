#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strcmp (char a[],char b[])
{
    int k=0;
    int i = 0;
    int len = strlen(a);
    char aa,bb;
    for (i==0;i<=len;i++)
    {
        aa = a[i];
        bb = b[i];
        
        if (aa!=bb)
        {   
            k += 1;
            break;
        }
    }
 return k;

}




int main()
{
    int k;
    char a[] = "ilk";
    char b[] = "ilk";

    k = my_strcmp(a,b);
    printf("%d",k); 


    












    return 0;
}