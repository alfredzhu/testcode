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
int b;
int c;
int m;
printf("1.����������ֵ  2.������ֵ�󱾽�  3.������ֵ������  4.����������  5.����Ͷ��\n");
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
if(a==3){
printf("����:");
scanf("%lf",&P);
printf("������(%%):");
scanf("%lf",&i);
printf("�긴������:");
scanf("%d",&M);
printf("������ֵ:");
scanf("%lf",&F);
N=log(F/P)/log(1+i/M*0.01)/M;
printf("����:%d\n",N);
}
if(a==4){
printf("����:");
scanf("%lf",&P);
printf("��������:");
scanf("%d",&N);
printf("�긴������:");
scanf("%d",&M);
printf("������ֵ:");
scanf("%lf",&F);
i=(pow(F/P,1.0/(M*N))-1)*M/0.01;
printf("������:%lf\n",i);
}
if(a==5){
printf("1.����Ͷ��  2.����Ͷ��\n");
scanf("%d",&a);
if(a==1){
printf("��Ͷ�ʽ��:");
scanf("%lf",&P);
printf("������(%%):");
scanf("%lf",&i);
printf("��������:");
scanf("%d",&N);
printf("�긴������:");
scanf("%d",&M);
F=0;
for(b=1;b<=N;b++){
c=P+P*i*0.01;
P=c;
F=P+F;
}
printf("������ֵ:%lf\n",F);
}
if(a==2){
printf("��Ͷ�ʽ��:");
scanf("%lf",&P);
printf("������(%%):");
scanf("%lf",&i);
printf("��������:");
scanf("%d",&m);
F=0;
for(b=1;b<=m;b++){
c=P+P*i*0.01/12;
P=c;
F=P+F;
}
printf("������ֵ:%lf\n",F);
}
}
}