#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,x[100],max;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
		scanf("%d",x[i]);
	for (int j = 0; j < n-1; ++j)
	{
		for (int i = 0; i < n-1-j; ++i)
		{
			if(x[i]>x[i+1]){
				max=x[i];
				x[i]=x[i+1];
				x[i+1]=max;
			}
		}
	}
	printf("%s\n", );
	return 0;
}