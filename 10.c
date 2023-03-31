#include<stdio.h>
int main()
{
	int maths,phy,chem,m1,m2;
	printf("marks obtained in maths:\n");
	scanf("%d",&maths);
	printf("marks obtained in Phy:\n");
	scanf("%d",&phy);
	printf("marks obtained in chem:\n");
	scanf("%d",&chem);
	if(maths>=65 && phy>=55 && chem>=50)
	{
		printf("Eligible Total Marsk is 190 and above:\n");
		m1=maths+phy+chem;
		printf("Three sub total marks ooptained:%d\n",m1);
		if(m1>=190)
		{
			printf("the candidte is eligible for admission\n");
		}
		else
		{
		printf("optional Eligible marks in Maths and Phy total=140\n");
		m2=maths+phy;
		printf("Maths and Phy total marks=%d\n",m2);
		}
		if(m2>=140 && chem>=65)
		{
			printf("The candidate is eligibel for admission\n");
		}
		else
		{
			if(m2<=140 && m1<=190)
			{
			printf("2The candidate is not eligible for admission\n");
			}
		}
	}
	else
		{
			printf("Eligible Criteria\n");
			printf("Marks in Maths above:65 \n  Marks in Phy above:55 \n  Marks in Chem:50\n");
			if(maths<=65 || phy<=55 || chem<=50)
			{
				printf("\n");
				printf("This candidate is not eligibel for admission");
			}
		}
	return 0;
}

		



