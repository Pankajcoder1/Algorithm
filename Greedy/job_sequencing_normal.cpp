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
/* ascii value 
A=65,Z=90,a=97,z=122
*/

bool com(const pair<char,pair<int,int>>&v1,const pair<char,pair<int,int>>&v2)
{
	return (v1.second.second>v2.second.second); 
}

int main()
{
	pan;
	vector<pair<char,pair<int,int>>>vec;
	vec.push_back(make_pair('a',make_pair(2,100)));
	vec.push_back(make_pair('b',make_pair(1,19)));
	vec.push_back(make_pair('c',make_pair(2,27)));
	vec.push_back(make_pair('d',make_pair(1,25)));
	vec.push_back(make_pair('e',make_pair(3,15)));
	sort(vec.begin(),vec.end(),com);
	int size=vec.size();
	bool flag[size]={false};
	vector<int>pak;
	for(int i=0;i<size;i++)
	{
		for(int j=min(size,vec[i].second.first)-1;j>=0;j--)
		{
			if(flag[j]==false)
			{
				flag[j]=true;
				pak.push_back(i);
				break;
			}
		}
	}

	for(int i=0;i<size;i++)
	{
		if(flag[i])
			cout<<vec[pak[i]].first<<" ";
	}
	line;
}