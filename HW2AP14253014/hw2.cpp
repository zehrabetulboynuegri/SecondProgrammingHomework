//14253014-ZEHRA BETÜL BOYNUEÐRÝ
#include<stdio.h> 


void main()
{
	int N, depo[80][80], istiflenecekKutuSayisi, min, a, b;
	printf("Depo buyutu(N):");
	scanf_s("%d", &N);
	printf("Istiflenecek kutu sayisi:");
	scanf_s("%d", &istiflenecekKutuSayisi);
	printf("Deponun mevcut dolulugu:\n");
	for (int i = 0;i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &depo[i][j]);
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N;j++)
		{


			printf("%d ", depo[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	min = depo[0][0];
	while (istiflenecekKutuSayisi != 0)
	{
		a = 0;
		b = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (min > depo[i][j])
				{
                   a = i;
					b = j;
					min = depo[a][b];
				}
			}
		}
		depo[a][b]++;
		min = depo[0][0];
		istiflenecekKutuSayisi--;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N;j++)
		{
			printf("%d ", depo[i][j]);
		}
		printf("\n");
	}


}