#include <stdio.h>
#include <stdlib.h>

void inverte_vetor(int v[])
{
	for(int i=9;i>=0;i--)	
	{
	printf("valor inteiro: %d\n",v[i]);
	}
}

void main()
{
int v;
int i=0;
int v_i[10];
char valor[10];
	while(i<10)
	{
	printf("Introduza um inteiro: ");	
	fgets(valor,10,stdin);
	v=atoi(valor);
	printf("O numero é: %d\n",v);
	v_i[i]= v;
	i++;
}

inverte_vetor(v_i);
}
