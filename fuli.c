//F=P*(1+i)^N
//F=A((1+i)^N-1)/i
//I=P*i*N
#include<stdio.h>
#include<math.h>
int main()
{
	double F,P,i,I;//F:������ֵ P:���� i:���� I:��Ϣ
	int N;//���ʻ�ȡʱ���������
	int M;//��������
	int a;
	printf("1.����������ֵ  2.������ֵ�󱾽�\n");
    scanf("%d",&a);
    if(a==1){
	printf("����:");
	scanf("%lf",&P);
	printf("������(%%):");
	scanf("%lf",&i);
	printf("��������:");
	scanf("%d",&N);
	printf("�긴������:");
	scanf("%d",&M);
	F=P*pow(1+i/M*0.01,M*N);
	I=P*i*0.01*N;
	printf("������ֵ:%lf\n",F);
	printf("�簴�������㣬��ϢΪ:%lf\n",I);
	}
	if(a==2){
		printf("������ֵ:");
		scanf("%lf",&F);
		printf("������(%%):");
		scanf("%lf",&i);
		printf("��������:");
		scanf("%d",&N);
		printf("�긴������:");
		scanf("%d",&M);
		P=F/pow(1+i/M*0.01,M*N);
		printf("����:%lf\n",P);
	}

}
