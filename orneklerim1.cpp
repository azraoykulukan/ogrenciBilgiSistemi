/* Karenin ve dikdortgenin alanini hesapalyan program */
#include <stdio.h>
int main()
{ 
int kare_kenari, dikdortgen1, dikdortgen2,karealan,dikdortgenalan;
printf("Once karenin kenarini sonra dikdortgenin kenarlarini girin=\n");
scanf("%d %d %d",&kare_kenari,&dikdortgen1,&dikdortgen2);
karealan=kare_kenari*kare_kenari;
dikdortgenalan=dikdortgen1*dikdortgen2;
printf("Karenin alani= %d \nDikdortgenin alani= %d",karealan,dikdortgenalan);
return 0;
}


/*Dairenin alani, çevresi kupun hacmi */
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	int daire_r, kup_kenar,daire_cevre,daire_alan,kup_hacim;
	printf("Once dairenin yaricapini sonra kupun bir kenarini girin");
	scanf("%d %d",&daire_r,&kup_kenar);
	daire_cevre=2*PI*daire_r;
	daire_alan=PI*daire_r*daire_r;
	kup_hacim=pow(kup_kenar,3);
	printf("Daire cevre=%d\nDaire alan=%d\nKup hacim=%d",daire_cevre,daire_alan,kup_hacim);
	return 0;
} 


/* 5 basamakli sayinin sayi degerlerini bulan prog */
#include <stdio.h>
#include <math.h>
int main()
{
	int sayi,birler,onlar,yuzler,binler,onbinler;
	printf("5 basamakli bir sayi girin");
	scanf("%d",&sayi);
	onbinler=sayi/10000;
	binler=sayi%10000/1000;
	yuzler=sayi%1000 / 100;
	onlar=sayi%100 / 10;
	birler=sayi%10;
	printf("Birler=%d\nOnlar=%d\nYuzler=%d\nBinler=%d\nOnbinler=%d",birler,onlar,yuzler,binler,onbinler);
	return 0;
} 


/* Cinsiyet ve boy uzunluguna gore mulakati gecme durumu ornegi */
#include <stdio.h>
int main()
{
	int boy;
	char i;
	printf("Cinsiyetinizi giriniz E/K=");
	scanf("%c",&i);
	printf("cm cinsinden boyunuzu girin=");
	scanf("%d",&boy);
	if((i=='K'|| i=='k') && (boy<=175 && boy>=160))
	{ printf("Mulakati gectiniz"); }
		else if((i=='E' || i=='e') && (boy<=185 && boy>=170))
		{ printf("Mulakati gectiniz"); }
			else			
			{ printf("Mulakati gecemediniz"); }
	return 0;
}


/* Çıktısı nedir?= 26 */
	#include <stdio.h>
	int main ()
	{
	int x=1, y=5, z=11;
x += y++ + --z / 2 * 4;
printf("%d", x);
return 0;
}
