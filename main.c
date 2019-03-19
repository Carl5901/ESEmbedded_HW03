void reset_handler(void)
{
	int x,y,ans;
	x=5;y=10;
	ans=machine(x,y);
}

int machine(int a,int b)
{
	int c;
	c=fun(a,b);
	return c;
}

int fun(int a,int n)
{
	int d;
	d=a*n-n;
	return d;
}

