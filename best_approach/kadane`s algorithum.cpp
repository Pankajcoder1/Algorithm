/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  -----------------------------------------------------------------------------------*/

int main()
{
	pan;
	int n;
	cin>>n;
	vi v(n,0);
	for(auto &s:v)
		cin>>s;
	int best=0,maxo=0;
	for(int i=0;i<n;i++)
	{
		maxo=max(maxo+v[i],v[i]);
		best=max(best,maxo);
	}
	cout<<"maximum subarray is "<<best<<endl;
}