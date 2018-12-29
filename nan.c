#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("%d",a[i][j]);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
{
 printf("\t%d",a[i][j]);
}
else
return 0;
}
}
}
