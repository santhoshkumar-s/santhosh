#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a=0;
int arr[15];
printf("Enter the limit");
scanf("%d",&n);
printf("Enter register numbers");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
a++;
arr[j]='\0';
}
if(a>0)
{
printf("%d",arr[i]);
a=0;
}
}
}
getch();
}
