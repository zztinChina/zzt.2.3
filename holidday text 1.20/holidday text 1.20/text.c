int cifang(int n,int count)
{   
	int i = 0;
	int h = 0;
	h = n;
	for (i = 0; i < count-1; i++)
	{
		h = h*n;
	}
	return h;
}
int math(int n, int count)
{
	if (n / 10 > 0)
	{
		int byebye = n / 10;
		int hello = n % 10;
		return cifang(hello,count) + math(byebye, count);
	}
	else if (n / 10 == 0)
	{
		return cifang(n,count);
	}
}
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	for (i = 0; i < 154; i++)
	{
		int n = i;
		int count = 0;
		while (n)
		{
			if (n / 10 >= 0)
			{
				count++;
				n = n / 10;
			}
		}
		int c = i;
		int len = math(c, count);
		if (len== c)
		{
			printf("这个数是水仙花数：%d\n", c);
		}
	}
	return 0;
}

