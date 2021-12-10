#include<stdio.h>
#include <math.h>

float diskriminant_hesapla(float a, float b, float c, float d)
{		
		float q,r,D;
		int sonuc;

		q = ((3*a*c)-pow(b,2)) / 9 * pow(a,2);
		//printf("%f \n",q);
		
		r = ((9*a*b*c)-(27*pow(a,2)*d)-(2*pow(b,3))) / (54*pow(a,3));
		//printf("%f \n",r);
		
		D = pow(q,3) + pow(r,2);
		//printf("%f \n",D);
		
		if (D > 0) { sonuc = 1;
		}
		if (D == 0) { sonuc = 2;
		}
		if (D < 0) { sonuc = 3;
		}
		
		return sonuc;
}
	
int main()
{
  int deger,a,b,c,d;
  
	printf("a degeriniz giriniz :"); 
	scanf("%d",&a);
	printf("b degeriniz giriniz :"); 
	scanf("%d",&b);
	printf("c degeriniz giriniz :"); 
	scanf("%d",&c);
	printf("d degeriniz giriniz :"); 
	scanf("%d",&d);
	
	deger = diskriminant_hesapla(a,b,c,d);
	if (deger == 1) { printf("bir kok reel ve iki kok kompleks esleniktir");
  }
	if (deger == 2) { printf("uç kok de reel ve en az iki tanesi esittir.");
  }
  if (deger == 3) { printf("uç kok de reel ve birbirine esit degildir");
  }
 
return 0;    
}
