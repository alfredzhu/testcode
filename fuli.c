//F=P*(1+i)^N
//F=A((1+i)^N-1)/i
//I=P*i*N
//ÿ�»����=[�����������ʡ���1+�����ʣ�^��������]��[��1+�����ʣ�^����������1]
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define warn1   while(0 == 
#define warn2   ){    while('\n' != getchar())    {    }    printf("���벻�Ϸ�!\n����������:");        }
double fuli()
{
	double P,i,F;//F:������ֵ P:���� i:����
	int N,M;//N:���ʻ�ȡʱ��������� M:��������
	printf("\t\t����:");
	warn1    scanf("%lf",&P)    warn2;
	printf("\t\t������(%%):");
	warn1    scanf("%lf",&i)    warn2;
	printf("\t\t��������:");
	warn1    scanf("%d",&N)    warn2;
	printf("\t\t�긴������:");
	warn1    scanf("%d",&M)    warn2;
	F=P*pow(1+i/M*0.01,M*N);
	printf("\t\t������ֵ:%lf\n",F);
	return F;
}
double danli()
{
	double P,i,F;//F:������ֵ P:���� i:����
	int N;//N:���ʻ�ȡʱ���������
	printf("\t\t����:");
	warn1    scanf("%lf",&P)    warn2;
	printf("\t\t������(%%):");
	warn1    scanf("%lf",&i)    warn2;
	printf("\t\t��������:");
	warn1    scanf("%d",&N)    warn2;
	F=P+(P*i*0.01*N);
	printf("\t\t��ֵ:%lf\n",F);
	return F;
}
double benjings()
{
	double P,i,F;//F:������ֵ P:���� i:����
	int N,M;//N:���ʻ�ȡʱ��������� M:��������
	printf("\t\t������ֵ:");
	warn1    scanf("%lf",&F)    warn2;
	printf("\t\t������(%%):");
	warn1    scanf("%lf",&i)    warn2;
	printf("\t\t��������:");
	warn1    scanf("%d",&N)    warn2;
	printf("\t\t�긴������:");
	warn1    scanf("%d",&M)    warn2;
	P=F/pow(1+i/M*0.01,M*N);
	printf("\t\t����:%lf\n",P);
	return P;
}
double nianxian()
{
	double P,i,F;//F:������ֵ P:���� i:����
	int N,M;//N:���ʻ�ȡʱ��������� M:��������
	printf("\t\t����:");
	warn1    scanf("%lf",&P)    warn2;
	printf("\t\t������(%%):");
	warn1    scanf("%lf",&i)    warn2;
	printf("\t\t�긴������:");
	warn1    scanf("%d",&M)    warn2;
	printf("\t\t������ֵ:");
	warn1    scanf("%lf",&F)    warn2;
	N=log(F/P)/log(1+i/M*0.01)/M;
	printf("\t\t����:%d\n",N);
	return N;
}
double lilv()
{
	double P,i,F;//F:������ֵ P:���� i:����
	int N,M;//N:���ʻ�ȡʱ��������� M:��������
	printf("\t\t����:");
	warn1    scanf("%lf",&P)    warn2;
	printf("\t\t��������:");
	warn1    scanf("%d",&N)    warn2;
	printf("\t\t�긴������:");
	warn1    scanf("%d",&M)    warn2;
	printf("\t\t������ֵ:");
	warn1    scanf("%lf",&F)    warn2;
	i=(pow(F/P,1.0/(M*N))-1)*M/0.01;
	printf("\t\t������:%lf\n",i);
	return i;
}
double dingqi()
{
	double P,i,F;//F:������ֵ P:���� i:����
	int N,M;//N:���ʻ�ȡʱ��������� M:��������
	int m;//����
	int ch;
	printf("\t\t1.����Ͷ��  2.����Ͷ��\n");
	warn1    scanf("%d",&ch)    warn2;
	if(ch==1){
		printf("\t\t��Ͷ�ʽ��:");
		warn1    scanf("%lf",&P)    warn2;
		printf("\t\t������(%%):");
		warn1    scanf("%lf",&i)    warn2;
		printf("\t\t��������:");
		warn1    scanf("%d",&N)    warn2;
		printf("\t\t�긴������:");
		warn1    scanf("%d",&M)    warn2;
		F=P*(1+(i*0.01))*(-1+pow(1+(i*0.01),N))/(i*0.01);
		printf("\t\t������ֵ:%lf\n",F);
	}
	if(ch==2){
		printf("\t\t��Ͷ�ʽ��:");
		warn1    scanf("%lf",&P)    warn2;
		printf("\t\t������(%%):");
		warn1    scanf("%lf",&i)    warn2;
		printf("\t\t��������:");
		warn1    scanf("%d",&m)    warn2;
		F=P*(1+(i*0.01/12))*(-1+pow(1+(i*0.01/12),m))/(i*0.01/12);
		printf("\t\t��ֵ:%lf\n",F);
	}
}
double refund()
{
    double P,i,mp;//mpÿ�»����
    int N;
    printf("\t\t�����\n");
    warn1    scanf("%lf",&P)    warn2
    printf("\t\t�����ʣ�\n");
    warn1    scanf("%lf",&i)    warn2
    printf("\t\t���ޣ�\n");
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
        printf("\t\t****************����������****************\n");  
        printf("\t\t|                1 ����                  |\n");
        printf("\t\t|                2 ����                  |\n");
        printf("\t\t|              3 �������                |\n");
        printf("\t\t|            4 Ͷ�����޹���              |\n");
        printf("\t\t|            5 Ͷ�����ʹ���              |\n");
        printf("\t\t|           6 ����Ͷ���������           |\n");
        printf("\t\t|           7 �ȶϢ�������           |\n");
        printf("\t\t|                0 �˳�                  |\n");
        printf("\t\t******************************************\n"); 
        printf("\t\t��ѡ��:");
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
             printf("���벻�Ϸ�����\n");
             continue ;
         }
 
             printf("\t\t���ԼΪ:%.2lf\n",F1);
 
     }
}

