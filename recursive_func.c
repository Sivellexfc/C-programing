#include<stdio.h>

int rek(int n,int bitis)
{
    int a = 0;

    if (n <= bitis)
    {
        a = n + rek(n+2,bitis);
    }
    return a;
}

int main(){

    int sonuc,tc,n,top,baslangic,bitis;
    int n1,n2;

    bolum1:

	    printf("ilk pozitif tamsayi degerini giriniz ="); scanf("%d",&n1);
	    printf("ikinci pozitif tamsayi degerini giriniz ="); scanf("%d",&n2);

	    if(n1 < 0 || n2 < 0) goto bolum1;

	    if (n1 >= n2)
	    {
	        bitis = n1;
	        baslangic = n2;
	    }
	    if (n1 < n2)
	    {
	        bitis = n2;
	        baslangic = n1;
	    }

        printf("tek ise 0, cift ise 1 degerini giriniz = ");
	    scanf("%d",&tc);

	    if (baslangic%2 == 0 && tc == 1)
	    {
	        n = baslangic;
	    }

	    if (baslangic%2 == 0 && tc == 0)
	    {
	        n = baslangic + 1;
	    }

	    if (baslangic%2 == 1 && tc == 1)
	    {
	        n = baslangic + 1;
	    }

	    if (baslangic%2 == 1 && tc == 0)
	    {
	        n = baslangic;
	    }

	    sonuc = rek(n,bitis);
	    printf("toplam =%3d",sonuc);


return 0;
}











