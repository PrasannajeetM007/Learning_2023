
#include<stdio.h>
#include<conio.h>

	int FindBiggest(int iNo1,int iNo2)
	{
		if(iNo1 > iNo2)
		{
			return iNo1;
		}
		else
		{
			return iNo2;
		}
		
	}
	
	int findBiggestTernary(int No1,int No2)
	{
		int biggest = (No1 > No2) ? No1 : No2;
		return biggest;
	}

int main()
{
   int a = 10;
   int b = 20;
   int largenum = 0;
   
   largenum = FindBiggest(a,b);
   printf("The biggest number using if - else :%d\n",largenum);
   
   int biggestternary = findBiggestTernary(a,b);
   printf("The biggest number using if - else :%d\n",biggestternary);
   
    return 0;
}