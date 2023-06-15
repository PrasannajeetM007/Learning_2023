	#include<stdio.h>
	#include<conio.h>

	void Grade(int iNo)
	{
		if(iNo >= 90 && iNo <= 100)
		{
			printf("Grade A :\n");
		}
		else if(iNo >= 75 && iNo <= 89)
		{
			printf("Grade B :\n");
		}
		else if(iNo >= 60 && iNo <= 74)
		{
			printf("Grade C :\n");
		}
		else if(iNo >= 50 && iNo <= 59)
		{
			printf("Grade D :\n");
		}
		else if(iNo >= 0 && iNo <= 49)
		{
			printf("Grade F :\n");
		}
		else 
		{
			printf("Invalied Score \n");
		}
	}

	int main()
	{
		int Score = 0;
		
		printf("Enter a Marks :");
		scanf("%d",&Score);
		
		Grade(Score);
	
		return 0;
	}