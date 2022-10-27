/* 1. Kullanıcıdan istenen iki farklı sayıyı yer değiştiriniz. Sayıları kullanıcıdan
alınan ilk haliyle ve yer değiştirilmiş haliyli ekrana ayrı ayrı yazdırınız.
Örn: firstNumber = 5, secondNumber=9
firstNumber swap secondNumber ? firstNumber=9 , secondNumber=5 */
#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Bir sayi girin\n");
	scanf("%d",&num1);
	printf("Ikinci sayiyi girin\n");
	scanf("%d",&num2);
	printf("Before swapping num1= %d , num2= %d\n",num1, num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("After swapping num1= %d , num2= %d\n",num1, num2);
	return 0;
}


/*2. Switch Case kullanarak kullanıcıdan alınan giriş karakterinin sesli harf
olup olmadığını kontrol eden programı yazınız.*/
#include <stdio.h>
int main()
{
	char ch;
	printf("Bir harf girin=");
	scanf("%c",&ch);
	switch(ch)
{
	case 'A': case 'a':
	case 'E': case 'e':
	case'I': case 'i':
	case 'O': case 'o':
	case 'U': case 'u':
	printf("Girdiginiz harf sesli harftir.");		
	break;
	default:
	printf("Girdiginiz harf sesli harf degildir.");
	}
	return 0;
}


/*3. İf else yapısı kullanarak kullanıcıdan alınan bir saat diliminin 10’dan
küçük olma durumunda Günaydın yazdıran, 10 ile 18 saatleri arasında
ise
iyi günler yazdıran bunun dışında iyi akşamlar yazdıran program yazınız.
Örn: time =15 time&gt;=10 &amp; time&lt;18 =&gt; “İyi günler” */
#include <stdio.h>
int main()
{
	int c;
	printf("Saat dilimini girin");
	scanf("%d",&c);
	if(c<=10)
	printf("Gunaydin!");
	else if(c>10 && c<18)
	printf("Iyi Gunler!");
	else
	printf("Iyi Aksamlar!");
	return 0;
}


/*4. aldığı notun ortalamasını hesaplayan ve ortalamaya göre harf notunu
hesaplayan programı yazın.
Örn: Kimya:70 Matematik:80 Fizik:100 İngilizce:50 Türkçe:100
Toplam: 70 + 80 + 100 + 50 + 100 = 400
Ortalama = (400/500)*100= 80 ( Ort&gt;=90 ? A, Ort&gt;=80 ? B, Ort&gt;=70 ? C,

Ort&gt;=60 ? D, Ort&gt;=80 ? E)

Harf Notunuz: B */
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	double ort;
	printf("5 Not giriniz");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	ort=(a+b+c+d+e)/5;
	if(ort>=90)
	printf("Ortalamaniz= %lf Harf Notunuz=A",ort);
	else if(ort<90 && ort>=80)
		printf("Ortalamaniz= %lf Harf Notunuz=B",ort);
		else if(ort<80 && ort>=70)
			printf("Ortalamaniz= %lf Harf Notunuz=C",ort);
			else if(ort<70 && ort>=60)
				printf("Ortalamaniz= %lf Harf Notunuz=D",ort);
				else
					printf("Ortalamaniz= %lf Harf Notunuz=E",ort);
					return 0;
}


/*5. Verilen biçimde iki sayı ve kullanıcıdan bir karakter isteyin. Bunları
num1, op ve num2 gibi değişkenlerde saklayın.
Örn: Switch(op) dört olası op değeri vardır, yani &#39;+&#39;, &#39;-&#39;, &#39;*&#39; ve &#39;/&#39;. &#39;+&#39;
durumu için ekleme yapın ve sonucu bazı değişkenlerde saklayın, yani
sonuç = num1 + num2. Benzer şekilde, &#39;-&#39; durumu için çıkarma yapın
ve sonucu bazı değişkenlerde saklayın, yani sonuç = num1 - num2.
Çarpma ve bölme için işlemi tekrarlayın. Son olarak sonucun değerini
yazdırın. */
#include <stdio.h>
int main()
{
	char op;
	float num1,num2;
	printf("Islemi seciniz (+, -, *, /)");
	scanf("%c",&op);
	printf("2 sayi giriniz\n");
	scanf("%f%f",&num1,&num2);
	switch(op)
	{
	case '+': 
	printf("Sonuc= %f\n",(num1+num2)); 	break;
	case '-': 
	printf("Sonuc= %f\n",(num1-num2));	break;
	case '*': 
	printf("Sonuc= %f\n",(num1*num2));	break;
	case '/': 
	printf("Sonuc= %f\n",(num1/num2));	break;
	default: printf("Yanlis karakter girdiniz\n");
		break;
	}
	return 0;
}

