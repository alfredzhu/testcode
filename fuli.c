//F=P*(1+i)^N
//F=A((1+i)^N-1)/i
//I=P*i*N
//每月还款额=[贷款本金×月利率×（1+月利率）^还款月数]÷[（1+月利率）^还款月数－1]
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define warn1   while(0 == 
#define warn2   ){    while('\n' != getchar())    {    }    printf("输入不合法!\n请重新输入:");        }
double fuli()
{
	double P,i,F;//F:复利终值 P:本金 i:利率
	int N,M;//N:利率获取时间的整数倍 M:复利次数
	printf("\t\t本金:");
	warn1    scanf("%lf",&P)    warn2;
	printf("\t\t年利率(%%):");
	warn1    scanf("%lf",&i)    warn2;
	printf("\t\t存入年限:");
	warn1    scanf("%d",&N)    warn2;
	printf("\t\t年复利次数:");
	warn1    scanf("%d",&M)    warn2;
	F=P*pow(1+i/M*0.01,M*N);
	printf("\t\t复利终值:%lf\n",F);
	return F;
}
double danli()
{
	double P,i,F;//F:复利终值 P:本金 i:利率
	int N;//N:利率获取时间的整数倍
	printf("\t\t本金:");
	warn1    scanf("%lf",&P)    warn2;
	printf("\t\t年利率(%%):");
	warn1    scanf("%lf",&i)    warn2;
	printf("\t\t存入年限:");
	warn1    scanf("%d",&N)    warn2;
	F=P+(P*i*0.01*N);
	printf("\t\t终值:%lf\n",F);
	return F;
}
double benjings()
{
	double P,i,F;//F:复利终值 P:本金 i:利率
	int N,M;//N:利率获取时间的整数倍 M:复利次数
	printf("\t\t复利终值:");
	warn1    scanf("%lf",&F)    warn2;
	printf("\t\t年利率(%%):");
	warn1    scanf("%lf",&i)    warn2;
	printf("\t\t存入年限:");
	warn1    scanf("%d",&N)    warn2;
	printf("\t\t年复利次数:");
	warn1    scanf("%d",&M)    warn2;
	P=F/pow(1+i/M*0.01,M*N);
	printf("\t\t本金:%lf\n",P);
	return P;
}
double nianxian()
{
	double P,i,F;//F:复利终值 P:本金 i:利率
	int N,M;//N:利率获取时间的整数倍 M:复利次数
	printf("\t\t本金:");
	warn1    scanf("%lf",&P)    warn2;
	printf("\t\t年利率(%%):");
	warn1    scanf("%lf",&i)    warn2;
	printf("\t\t年复利次数:");
	warn1    scanf("%d",&M)    warn2;
	printf("\t\t复利终值:");
	warn1    scanf("%lf",&F)    warn2;
	N=log(F/P)/log(1+i/M*0.01)/M;
	printf("\t\t年限:%d\n",N);
	return N;
}
double lilv()
{
	double P,i,F;//F:复利终值 P:本金 i:利率
	int N,M;//N:利率获取时间的整数倍 M:复利次数
	printf("\t\t本金:");
	warn1    scanf("%lf",&P)    warn2;
	printf("\t\t存入年限:");
	warn1    scanf("%d",&N)    warn2;
	printf("\t\t年复利次数:");
	warn1    scanf("%d",&M)    warn2;
	printf("\t\t复利终值:");
	warn1    scanf("%lf",&F)    warn2;
	i=(pow(F/P,1.0/(M*N))-1)*M/0.01;
	printf("\t\t年利率:%lf\n",i);
	return i;
}
double dingqi()
{
	double P,i,F;//F:复利终值 P:本金 i:利率
	int N,M;//N:利率获取时间的整数倍 M:复利次数
	int m;//月数
	int ch;
	printf("\t\t1.按年投资  2.按月投资\n");
	warn1    scanf("%d",&ch)    warn2;
	if(ch==1){
		printf("\t\t年投资金额:");
		warn1    scanf("%lf",&P)    warn2;
		printf("\t\t年利率(%%):");
		warn1    scanf("%lf",&i)    warn2;
		printf("\t\t存入年限:");
		warn1    scanf("%d",&N)    warn2;
		printf("\t\t年复利次数:");
		warn1    scanf("%d",&M)    warn2;
		F=P*(1+(i*0.01))*(-1+pow(1+(i*0.01),N))/(i*0.01);
		printf("\t\t复利终值:%lf\n",F);
	}
	if(ch==2){
		printf("\t\t月投资金额:");
		warn1    scanf("%lf",&P)    warn2;
		printf("\t\t年利率(%%):");
		warn1    scanf("%lf",&i)    warn2;
		printf("\t\t存入月数:");
		warn1    scanf("%d",&m)    warn2;
		F=P*(1+(i*0.01/12))*(-1+pow(1+(i*0.01/12),m))/(i*0.01/12);
		printf("\t\t终值:%lf\n",F);
	}
}
double refund()
{
    double P,i,mp;//mp每月还款额
    int N;
    printf("\t\t贷款金额：\n");
    warn1    scanf("%lf",&P)    warn2
    printf("\t\t年利率：\n");
    warn1    scanf("%lf",&i)    warn2
    printf("\t\t年限：\n");
    warn1    scanf("%d",&N)    warn2   
    mp = P*i*pow((1.0+i/12),N*12)/(pow(1.0+i/12,N*12)-1);
    return mp;

}



void main()
{
	double F1;
	int ch2;
    while(1)
    {
        printf("\t\t****************复利计算器****************\n");  
        printf("\t\t|                1 复利                  |\n");
        printf("\t\t|                2 单利                  |\n");
        printf("\t\t|              3 本金估算                |\n");
        printf("\t\t|            4 投资年限估算              |\n");
        printf("\t\t|            5 投资利率估算              |\n");
        printf("\t\t|           6 定期投资收益计算           |\n");
        printf("\t\t|           7 等额本息还款计算           |\n");
        printf("\t\t|                0 退出                  |\n");
        printf("\t\t******************************************\n"); 
        printf("\t\t请选择:");
         warn1    scanf("%d",&ch2)    warn2
         switch(ch2){
         case 1:
             F1 = fuli(); 
			 break;
         case 2:
             F1 = danli(); 
			 break;
         case 3:
             F1 = benjings();
             break;
         case 4:
             F1 = nianxian();
             break;
         case 5:
             F1 = lilv();
			 break;
         case 6:
             F1 = dingqi();
             break;
         case 7:
             F1 = refund();
             break;
         case 0:
             exit(1);
             break;
         default:
             printf("输入不合法！！\n");
             continue ;
         }
 
             printf("\t\t结果约为:%.2lf\n",F1);
 
     }
}

