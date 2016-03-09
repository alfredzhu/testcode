//F=P*(1+i)^N
//F=A((1+i)^N-1)/i
#include<stdio.h>
#include<math.h>
int main()
{
	double F,P,i;//F:复利终值 P:本金 i:利率
	int N;//利率获取时间的整数倍
	int M;//复利次数
	printf("本金:");
	scanf("%lf",&P);
	printf("年利率(%%):");
	scanf("%lf",&i);
	printf("存入年限:");
	scanf("%d",&N);
	printf("年复利次数:");
	scanf("%d",&M);
    if(M==1)
	{
		F=P*pow(1+i*0.01,N);
	}
	else
	{
		F=P*pow(1+i/M*0.01,M*N);
	}
	printf("复利终值:%lf",F);

}