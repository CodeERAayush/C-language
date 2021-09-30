#include <stdio.h>
int main()
//  to pass the exam one need to get total of 40% and in each subject it should be more than 33%
{
	float total;
	float maths;
	float physics;
	float chemestry;
	printf("enter your maths marks\n");
	scanf("%f", &maths);
	printf("enter your physics marks\n");
	scanf("%f", &physics);
	printf("enter your chemestry marks\n");
	scanf("%f", &chemestry);
	total = (maths + physics + chemestry) / 3;
	if ((total < 40) || physics < 33 || maths < 33 || chemestry < 33)
	{
		printf("you are fail and your percentege is %f", total);
	}
	else
	{
		printf("your total percentage is %f ", total);
	}
	return 0;
	getch();
}
