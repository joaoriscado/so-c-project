#include <stdio.h>
#include <stdlib.h>

void inverte_vetor(int v[])
{
	for(int i=9;i>=0;i--)	
	{
	printf("valor inteiro: %d\n",v[i]);
	}
}

void multp_vetor(int v[])
{
	for (int i=0;i<10;i++)
	{
	printf("O valor multiplicado é : %f\n",v[i]*2.5);
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
multp_vetor(v_i);
//inverte_vetor(v_i);

}
