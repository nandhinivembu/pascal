#include<stdio.h>
#include<string.h>
void main()
{
char ip[5][32]={"128.96.34.15.","128.96.34.139.","128.96.33.14."};
char mask[5][32]={"255.255.255.128.","255.255.128.","255.255.255.0."};
char subnum[5][32]={"128.96.34.0.","128.96.34.128.","255.96.33.0."};
int i,j,a2_[10],a3_[10],a2,a1,a1_[10],temp;
char str[32]="",temp_str[4];
printf("the subnet forwarding table is:\n");
printf("ip address\t subnet mask\t subnet number\n");
for(i=0;i<4;i++)
printf("%s\t%s\t%s\n",ip[i],mask[i],subnum[i]);
printf("\n0.H1\n 1.H2\n 2.H3\n enter the choice for the source mask");
scanf("%d",&a2);
j=0;
temp=0;
for(i=0;i<strlen(ip[a1]);i++)
{
ip[a1][i]!='.'?temp=temp*10+ip[a1][i]-48:a1_[j++]=temp;
if(ip[a1][i]=='.')
temp=0;
}
temp=0;
j=0;
for(i=0;i<strlen(mask[a2]);i++)
{
mask[a2][i]!='.'?temp=temp*10+mask[a2][i]-48:a2_[j++]=temp;
if(mask[a2][i]=='.')
temp=0;
}
i=0;
for(j=0;j<4;j++)
{
a3_[j]=a1_[j]&a2_[j];
i=0;
do
{
temp_str[i++]=a3_[j]%10+48;
a3_[j]/=10;
}while(a3_[j]>0);
temp_str[i]='\0';
strcat(str,strrev(temp_str));
strcat(str,".");
}
for(j=0;j<3;j++)
if(strcmp(str,subnum[j])==0)
printf("destination host %d",j);
}
