//F=P*(1+i)^N
//F=A((1+i)^N-1)/i
#include<stdio.h>
#include<math.h>
int main()
{
	double F,P,i;//F:������ֵ P:���� i:����
	int N;//���ʻ�ȡʱ���������
	int M;//��������
	printf("����:");
	scanf("%lf",&P);
	printf("������(%%):");
	scanf("%lf",&i);
	printf("��������:");
	scanf("%d",&N);
	printf("�긴������:");
	scanf("%d",&M);
    if(M==1)
	{
		F=P*pow(1+i*0.01,N);
	}
	else
	{
		F=P*pow(1+i/M*0.01,M*N);
	}
	printf("������ֵ:%lf",F);

}