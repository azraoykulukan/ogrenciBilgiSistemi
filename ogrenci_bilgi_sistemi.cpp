/* Ogrenci Bilgi Sistemi*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define saatBilgisi() __TIME__
void ogrenciEkle();
void dersSec();
void kayitDurumu(); //Basvurunuz alindi Dondurma Silme//
void parolaDegistir();

struct Ogrenci
{
	char ad[30];
	char soyad[30];
	char okulNumarasi[15];
}ogrenci1;


int main()
{
	int secim;
	do
{
	printf("\n\nOgrenci Bilgi Sistemi\n");
	printf("----------------------\n");
	printf("(1) Ogrenci Ekle \n");
	printf("(2) Ders Secme\n");
	printf("(3) Kayit Dondurma Basvurusu\n");
	printf("(4) Parola Degistirme \n");
	printf("(5) Cikis \n");
	printf("----------------------\n");
	printf("Bakmak istediginiz secenege karsilik gelen sayiyi girin=");
	scanf("%d",&secim);
	fflush(stdin);
	switch(secim)
	{
		case 1:
			printf("\nOgrenci Ekleme\n");
			printf("------------------------------");
			ogrenciEkle();
			printf("\n");
			break;
		case 2:
			printf("\nDers Secme\n");
			printf("-----------------------------------");
			dersSec();
			printf("\n");	
			break;
		case 3:
			printf("\nKayit Durumu (Kayit Dondurma/Silme Basvurusu)\n");
			printf("--------------------------------------------------");
			kayitDurumu();
			printf("\n");	
			break;
		case 4:
			printf("\nParola Degistirme\n");
			printf("----------------------------------");
			parolaDegistir();
			printf("\n");
			break;
		case 5:
			printf("\nCikis Yapiliyor\n");
			break;		
		default:
       		 printf("\nTekrar Deneyin\n\n");
             break;
	}
}
 while(secim!=5);
	return 0;
}

void ogrenciEkle()
{
struct Ogrenci ogrenci1;
printf("\nLutfen adinizi girin=");
gets(ogrenci1.ad);
printf("\nLutfen soyadinizi girin=");
gets(ogrenci1.soyad);
printf("\nLutfen okul numaranizi girin=");
gets(ogrenci1.okulNumarasi);
printf("\nOgrenci Bilgileri\n");
printf("----------------------------\n");
printf("Ogrenci Adi= %s\n",ogrenci1.ad);  
printf("Ogrenci Soyadi= %s\n",ogrenci1.soyad);    
printf("Ogrenci Okul Numarasi= %s\n",ogrenci1.okulNumarasi);  
printf("Ogrenci Maili= %s@imu.edu.tr\n",ogrenci1.okulNumarasi);
}

void dersSec()
{
	int secmeliDersKodlari[5]={101,102,103,104,105};
	int secilenDersKodlari[3]={0,0,0};
	int secim,flag=0;
	while (flag==0)
	{
	printf("\nSecebileceginiz dersleri goruntulemek icin (1)\n");
	printf("Secmeli ders secmek icin (2)\n");
	printf("Seciminiz=");
	scanf("%d",&secim);

		if(secim==1)
		{
			printf("----------------------------\n");
			printf("Ders Kodu\tDers\t");
			printf("\n101\t\tMakine Ogrenmesi");
			printf("\n102\t\tGomulu Sistemler");
			printf("\n103\t\tRobotik");
			printf("\n104\t\tYapay Zeka");
			printf("\n105\t\tBulanik Mantik");
			printf("\n----------------------------\n");
		}
			else if (secim==2)
			{
				printf("3 tane secmeli ders secebilirsiniz. Sectiginiz dersi tekrar secemezsiniz. Lutfen ders kodunu giriniz.");
				for(int dersHakki=0;dersHakki<3;dersHakki++)
				{
					printf("\n%d. secmeli ders seceneginiz=", dersHakki+1);
					scanf("%d",&secilenDersKodlari[dersHakki]);
								if(secilenDersKodlari[dersHakki]==101)
								{
								printf("%d. ders seciminiz basariyla yapilmistir.",dersHakki+1); 
							
								}
								else if(secilenDersKodlari[dersHakki]==102)
								{
								printf("%d. ders seciminiz basariyla yapilmistir.",dersHakki+1);
							
								}
								else if(secilenDersKodlari[dersHakki]==103)
								{ 
								printf("%d. ders seciminiz basariyla yapilmistir.",dersHakki+1);
							
								}
								else if(secilenDersKodlari[dersHakki]==104)
								{
								printf("%d. ders seciminiz basariyla yapilmistir.",dersHakki+1);
							
								}
								else if(secilenDersKodlari[dersHakki]==105)
								{
								printf("%d. ders seciminiz basariyla yapilmistir.",dersHakki+1);
							
								}
								else
								{
								printf("Hatali secim. Lutfen ders kodundan emin olup tekrar deneyiniz."); 
								dersHakki--;
								break;
								}
				}
			printf("\n\nSectiginiz Derslerin Kodlari\n");
			printf("----------------------------\n");
			printf("Ders Kodu");
			printf("\n%d\t\t",secilenDersKodlari[0]);
			printf("\n%d\t\t",secilenDersKodlari[1]);
			printf("\n%d\t\t",secilenDersKodlari[2]);
			printf("\n----------------------------\n");
					flag=1;
			}
			else
			{
			printf("Boyle bir secenek hakkiniz yok. Lutfen tekrar deneyiniz.");
			flag=1;
			}
			}
}


void kayitDurumu()
{
	char secim;
		printf("\nKayit durumunuzu ogrenmek icin 'd'ye basiniz.");
		printf("\nKayit durumuzunu degistirmek icin 'k'ye basiniz.");
		scanf("%c",&secim);
			if(secim=='d' || secim=='D')
			printf("\nSisteme kayitli gozukuyorsunuz.\n");			
		
			else if(secim=='k' || secim=='K')
			{
				printf("Basvurunuz alinmistir.");
			}
		
			else
			printf("\nHatali secim yaptiniz. Lutfen tekrar deneyin.");	

}



void parolaDegistir() 
{
	char sifre[20];
	char sifreDogrulama[20];
	int i;
	int flag;
	while(1)
	{
		flag=0;
		i=0;
		printf("\nParolanizi girin\n");
		scanf("%s",&sifre);
		printf("Parolanizi dogrulayin\n");
		scanf("%s",&sifreDogrulama);
		while(!(sifre[i]=='\0' && sifreDogrulama[i]=='\0'))
		{
			if(sifre[i]!=sifreDogrulama[i])
			{
				printf("Girdiginiz parolalar uyusmamaktadir. Lutfen tekrar deneyiniz.\n");
				flag=1;
				break;
			}
			else
			{
				i++;
			}
		}
		if(flag==0)
		{
			printf("Parolaniz basariyla guncellenmistir.\n");
			printf("Islem saatiniz= %s", __TIME__);
			break;
		}
	}
}
