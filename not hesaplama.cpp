
// Kullan�c�dan vize ve final notlar�n� ald�ktan sonra not ortalamas�n� hesaplay�p dersi hangi harf notuyla ge�ti�ini ekrana yazd�rma

#include <stdio.h>

main()
{
	int vize;
	int final;
	double notu;
	
	printf("Vize notunu giriniz: ");
	scanf("%d",&vize);
	printf("Final notunu giriniz: ");
	scanf("%d",&final);
	
	notu = (vize * 0.4) + (final * 0.6);
	
	printf("Y�l sonu notu = %f\n",notu);
	
	if(notu > 90){
		printf(" AA ile dersi gectiniz.");
	}
	else if(notu > 85){
		printf("BA ile dersi gectiniz.");
	}
	else if(notu > 80){
		printf("BB ile dersi gectiniz.");
	}
	else if(notu > 75){
		printf("CB ile dersi gectiniz.");
	}
	else if(notu >50){
		printf("Kosullu gectiniz");
	}
	else{
		printf("Dersten kaldiniz..");
	}
}
