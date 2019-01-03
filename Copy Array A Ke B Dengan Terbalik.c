#include <conio.h>
void main()

{
	int i,n =10,a[20],b[20];
	
	
	printf("berapa banyak data yang ingin di enter = "); scanf("%d",&n);
	
	printf("\nMasukan Data\n");
	
	for(i=0;i<n;i++)
	
	{
		printf("masukan data No %d = ",1+i);
		scanf("%d",&a[i]);
	}
	
	printf ("\n Array Asli = \n");
	for (i=0;i<n;i++)
		printf("%d",a[i]);
		
	for (i=0;i<n;i++)
	
	{
		b[n-1-i]=a[i];
	}
	
	printf("Array yang di cpy = \n");
	for (i=0;i<n;i++)
	printf("%d",b[i]);
	
	getch();
}
