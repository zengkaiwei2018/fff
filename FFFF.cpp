#include <stdio.h>
int main()
{
	int A,B;
	double y;
	scanf("%d %d",&A,&B);
	y=1.00*A/B;
	if(B>0)
	{
	    printf("%d/%d=%.2f",A,B,y);
	}
	else if(B<0)
	{
	    printf("%d/(%d)=%.2f",A,B,y);
	}
	else if(B==0)
	{
	    printf("%d/%d=Error",A,B);
	}

	return 0;
}
