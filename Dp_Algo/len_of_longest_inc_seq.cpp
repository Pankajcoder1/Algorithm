/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
typedef vector<pair<int,int>> vpi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;
typedef map<int,int>m;
typedef set<string> ss;
typedef set<int> si;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007;
#define phi 1.618
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
// function
ll power(ll x,ll y)
{
	ll res=1;
	while(y>0)
	{
		if(y%2==1)res*=x;
		y/=2; x*=x;
	}
	return res;
}
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  ---------------------------------MAIN-------------------------------------------*/

// time complexity is O(n^2)
int main()
{
	pan;
	int lis=1,max_=0;
	int arr[]={10,22,9,33,21,50,41,60};
	int N=sizeof(arr)/sizeof(arr[0]);
	int *res=new int[N];
	for(int i=0;i<N;i++)
	{
		res[i]=1;
	}
	for(int i=1;i<N;i++)
	{
		lis=1;
		for(int j=0;j<=i-1;j++)
		{
			if(arr[j]<arr[i]&&res[i]<res[j]+1)
			{
				res[i]=res[j]+1;
			}
		}
	}
	sort(res,res+N);
	cout<<"longest subsequence is of length "<<res[N-1]<<endl;
}