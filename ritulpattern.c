#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
    int a=1;
	for(i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		int k;
        if(i<n)
        {
		    for(k=1;k<=(2*i-1);k++)
		    {
			    if(k==1)
			    {
				    printf("%d",a);
			    }
			    else if(k==2*i-1)
			    {
				    printf("%d",i);
			    }
			    else
			    {
				    printf(" ");
			    }
		    }
        }
        else if(i==n)
        {
            int l;
            int val=1;
            for(l=1;l<=2*i-1;l++)
            {
                if(l%2==0)
                {
                    printf(" ");
                }

                else
                {
                    printf("%d",val);
                    val++;
                }
            }
        }
		printf("\n");
	}
	return 0;
}