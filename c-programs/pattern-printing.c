// Written on : in 2015 August
// Author : Ravishankar S R
#include<stdio.h>
main()
{
int i,j;
int n=100;
	for(i=n;i>0;i--)
	{
            for(j=(i-1);j>0;j--)
             { 
              printf("%d ",j);
             }
              printf("\n");
	}
}

