/*
	written by pankaj kumar.
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<algorithm>
#include<string.h>
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define mod 1000000007;
using namespace std;
typedef long long ll ;
#define line cout<<endl;

void egyptian(int a,int b)
{
	if(a==1)
		cout<<"1/"<<b<<" ";
	else
	{
		int hcf,temp;
		// don't do here.
		// temp=ceil(b/a);
		temp=ceil(b/(a*1.0));
		cout<<"1/"<<temp<<" ";
		hcf=__gcd(a*temp-b,b*temp);
		egyptian((a*temp-b)/hcf,(b*temp)/hcf);
	}
}


int main()
{
	pan;
	int a,b;
	cout<<"Enter two no ";
	cin>>a>>b;
	egyptian(a,b);
}