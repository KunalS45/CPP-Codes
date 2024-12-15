#include<bits/stdc++.h>
using namespace std;

void sum1(int i,int sum)
{
	if(i<1)
	{
		cout<<sum<<endl;
		return;
	}
	sum1(i-1,sum+i);
}
int main()
{
	int n;
	cin>>n;
	sum1(n,0);
	return 0;
}

