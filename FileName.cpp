#include<stdio.h>
int main()
{
	int a[101] = { 0 };
	int n=0, i=0, k=0;
	while (n != 100)
	{
		i++;
		if (i > 100)
			i = 1;
		if (a[i] == 0)
			k++;
		if (k == 13)
		{
			n++;
			printf("��%d����Ϊ%d\n",n, i);
			a[i] = 1;
			k = 0;
		}
	}
	return 0;
}