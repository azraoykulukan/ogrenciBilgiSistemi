 /* SORU 1 */
 #include <stdio.h>
int main()
{
	int satir,sutun,i,j;
	printf("Satir sayisini girin");
	scanf("%d",&satir);
	printf("Sutun sayisini giriiniz");
	scanf("%d",&sutun);
	for(i=0;i<satir;i++) {
	j=0;
		for(j=0;j<sutun;j++) {
		printf("*");   }
		printf("\n");
	}
	return 0;
}



/* SORU 2 */
 #include <stdio.h>
int main()
{
	int i,j,n;
	printf("Satir sayisini girin");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	j=0;
		for(j=0;j<=i;j++) {
			printf(" * ");
		}
		printf("\n");
		}
		return 0;
} 


/*SORU 3 */
#include <stdio.h>
int main()
{
	int i,j,n=1;
	for(i=1;i<=10;i++) {
		for(j=1;j<=i;j++) {
		printf("%d",n);
		 }
	n++;
	printf("\n");
	 }
	return 0;
} 


/* SORU 4 */
#include <stdio.h>
int main()
{
	int i,j,n=1;
	for(i=1;i<=10;i++) {
		printf("%d ",i);
		for(j=1;j<=i;j++) {
		printf("%d",n);
		 }
	n++;
	printf("\n");
	 }
	return 0;
} 



/* SORU 5 */
#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++) {
	printf("%d ",i);
	j=1;
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
	}
	printf("\n");
	}
	return 0;
} 

