#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int kg;
	printf("Kilogrami giriniz =");
	scanf("%d",&kg);

	if (kg<=0)
	{
	printf("Hata!");
	}
	else if(kg>100)
	{
	printf("Fazla agir");
	}
	else
	{
		if (kg%2==0)
		{
			printf("YES");
		}

		else
		{
			printf("NO");
		}
	}

	return 0;
}

