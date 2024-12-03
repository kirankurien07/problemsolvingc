#include.stdio.h>
void main()
{
  int x[5],i,value,total=0;
  clrscr();
  for(i=0;i<5;i++)
  {
      scanf("%d",&value);
      x[i]=value;
}
  for(i=0;i<5;i++)
    total=total+x[i]*x[i];
    printf("\n total =%d\n",total);
 getch();
}