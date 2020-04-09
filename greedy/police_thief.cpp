#include<iostream>
#include<vector>
using namespace std;

int main()
{
	char arr1[]={'P','T','T','P','T'};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int k=2;
	// police catch thieve
	vector<int>p;
	vector<int>t;
	for(int i=0;i<n;i++)
	{
		if(arr1[i]=='P')
			p.push_back(i);
		else
			t.push_back(i);
	}
	int i=0,j=0,count=0;
	while(i<p.size() && j<t.size())
	{
		if(abs(p[i]-t[j])<=k)
		{
			count++;
			i++;
			j++;
		}
		else if(p[i]>t[j])
			j++;
		else
			i++;
	}
	cout<<count<<endl;
}