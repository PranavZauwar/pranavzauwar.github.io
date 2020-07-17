#include<iostream>
using namespace std;
int bit(int m)
{
	int a,b,c,l,s,sc;
	a=n%10; n/=10;
	b=n%10; n/=10;
	c=n%10; n/=10;
	
	l=(a>b)?a:b;
	l=(c>l)?c:l;
	s=(a<b)?a:b;
	s=(c<s)?c:s;
	
	sc=l*11+s*7;
	
	sc=sc%100;
	
	return sc;
}

int fp (int s_a[], int N)
{
	int s_d[10],i,p=0,msb;
	
	for(i=0;i<10;i++)
	{
		s_d[i]=0
	}
	for(i=0;i<N;i=i+2)
	{
		msb=s_a[i]/10;
		for(int j=i+2;j<N;j=j+2)
		{
			if(msb==s_a[j]/10)
			{
				if(s_d[msb]<2)
				{
				s_d[msb]++
				}
			}
		}
	}
}

for(i=0;i<10;i++)
{
	p=p+s_d[i];
}

return p;


int main()
{
	int N,i:
	int ip_arr[501];
	int s_a[501];
	int p;
	c>>N;
	for(i=0;i<N;i++)
	{
		c>>ip_arr[i];
	}
	for(i=0;i<N;i++)
	{
		s_a[i]=bit_S(ip_arr[i]);
	}
	
	p= findp(s_a,N);
	c<<p;
	
	return 0;
}