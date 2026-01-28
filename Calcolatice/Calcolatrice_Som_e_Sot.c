#include <stdio.h>

float divi(float n1, float n2)
{
	int cont=0;
	while (n1>0){
		n1 = n1 - n2;
		cont++;
	}
	return cont;
}
int molt(int n1, int n2)
{
	int cont=1;
	while (cont<n2){
		n1 += n1;
		cont++;
	}
	return n1;
}
int sott(int n1, int n2)
{
	int s;
	return s = n1 - n2;
}
int somma(int n1, int n2)
{
	int s;
	return s = n1 + n2;
}
int main()
{
	int som, sot, mol, div, x, y, num, l;
	printf("*************************\n");
	printf("*******Calcolatrice******\n");
	printf("*************************\n");
	printf("1. Moltiplicazioni\n");
	printf("2. Divisione\n");
	printf("3. Sottrazioni\n");
	printf("4. Addizionne\n");
	scanf("%d", &l);
	switch (l){
		case 1:
			scanf("%d", &x);
			scanf("%d", &y);
			mol = molt(x, y);
			printf("MOlt = %d\n", mol);
			break;

		case 2:
			scanf("%d", &x);
			scanf("%d", &y);
			div = divi(x, y);
			printf("%d", div);
			break;

		case 3:
			scanf("%d", &x);
			scanf("%d", &y);
			sot = sott(x, y);
			printf("%d", sot);
			break;
		case 4:
			scanf("%d", &x);
			scanf("%d", &y);
			som = somma(x, y);
			printf("%d", som);
			break;

		default:
		printf("Il numero deve essere da 1 a 4");
	}

}
