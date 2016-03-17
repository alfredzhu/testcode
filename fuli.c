//F=P*(1+i)^N
//F=A((1+i)^N-1)/i
//I=P*i*N
#include<stdio.h>
#include<math.h>
int main()
{
double F,P,i,I;//F:复利终值 P:本金 i:利率 I:利息
int N;//利率获取时间的整数倍
int M;//复利次数
int a;
int b;
int c;
int m;
printf("1.本金求复利终值  2.复利终值求本金  3.本金终值求年限  4.期望求利率  5.定期投资\n");
scanf("%d",&a);
if(a==1){
printf("本金:");
scanf("%lf",&P);
printf("年利率(%%):");
scanf("%lf",&i);
printf("存入年限:");
scanf("%d",&N);
printf("年复利次数:");
scanf("%d",&M);
F=P*pow(1+i/M*0.01,M*N);
I=P*i*0.01*N;
printf("复利终值:%lf\n",F);
printf("如按单利计算，本息为:%lf\n",I);
}
if(a==2){
printf("复利终值:");
scanf("%lf",&F);
printf("年利率(%%):");
scanf("%lf",&i);
printf("存入年限:");
scanf("%d",&N);
printf("年复利次数:");
scanf("%d",&M);
P=F/pow(1+i/M*0.01,M*N);
printf("本金:%lf\n",P);
}
if(a==3){
printf("本金:");
scanf("%lf",&P);
printf("年利率(%%):");
scanf("%lf",&i);
printf("年复利次数:");
scanf("%d",&M);
printf("复利终值:");
scanf("%lf",&F);
N=log(F/P)/log(1+i/M*0.01)/M;
printf("年限:%d\n",N);
}
if(a==4){
printf("本金:");
scanf("%lf",&P);
printf("存入年限:");
scanf("%d",&N);
printf("年复利次数:");
scanf("%d",&M);
printf("复利终值:");
scanf("%lf",&F);
i=(pow(F/P,1.0/(M*N))-1)*M/0.01;
printf("年利率:%lf\n",i);
}
if(a==5){
printf("1.按年投资  2.按月投资\n");
scanf("%d",&a);
if(a==1){
printf("年投资金额:");
scanf("%lf",&P);
printf("年利率(%%):");
scanf("%lf",&i);
printf("存入年限:");
scanf("%d",&N);
printf("年复利次数:");
scanf("%d",&M);
F=0;
for(b=1;b<=N;b++){
c=P+P*i*0.01;
P=c;
F=P+F;
}
printf("复利终值:%lf\n",F);
}
if(a==2){
printf("月投资金额:");
scanf("%lf",&P);
printf("年利率(%%):");
scanf("%lf",&i);
printf("存入月数:");
scanf("%d",&m);
F=0;
for(b=1;b<=m;b++){
c=P+P*i*0.01/12;
P=c;
F=P+F;
}
printf("复利终值:%lf\n",F);
}
}
}