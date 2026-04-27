#include<stdio.h>
#include<math.h>   

int isArmstrong(int num);
int numofdigits(int num);

int main()
{
    int num,itr;

    printf("Enter an integer: ");
    scanf("%d", &num);
    for(itr=1; itr<=num; itr++)
    {
    if(isArmstrong(itr))
        printf("%d is an Armstrong number.\n", itr);
    }
    return 0;
}

int numofdigits(int num)
{
  int count=0; 

  while(num)
  {
    num/=10;
    count++;
  }

  return count;
}

int isArmstrong(int val)
{
    int res=0,temp,tempval=val;
    int count = numofdigits(val);

    while(val)
    {
        temp=1;
        int digit = val % 10;
        for (int i=0; i< count; i++)
        {
            temp*= digit;
        }
        res += temp;
        temp=1;
        val/=10;
    }
    return (res == tempval);
}