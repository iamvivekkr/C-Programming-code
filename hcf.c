//CALCULATE HCF OF 2 NUM

#include<stdio.h>
int main()
{
  int a, b, i, hcf;
  printf("Enter two no. that u find hcf: ");
  scanf("%d %d", &a, &b);
  for(i=1;i<=a&&i<=b; i++)
  {
      if(a%i==0&&b%i==0)
      hcf=i;
  }
  printf("hcf is %d",hcf);
  return 0;
}