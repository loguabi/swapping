#include<stdio.h>
int main()
{
int x,y;
printf("\n enter the elements\n");
scanf("%d%d",&x,&y);
printf("\n before swaping x=%d,y=%d",x,y);
x=x^y;
y=y^x;
x=x^y;
printf("\n after swaping x=%d y=%d",x,y);
return 0;
}
