/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include<algorithm>
#include<string.h>
#include<iostream>
#include<vector>
#include<deque>
#include<cmath>
#include<set>
#include<map>
using namespace std;
typedef long long ll ;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;
typedef set<string> ss;
typedef set<int> si;
typedef set<ll> sl;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
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
#define second ss
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE*8-1
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/

// time complexity is O(log(n))
int main()
{
	pan;
	ll a,b,res=1;
	cout<<"Enter two no : ";
	cin>>a>>b;
	while(y>0)
	{
		if(y%2==1)
			res*=x;
		y=y/2;
		x=x*x;
	}
	cout<<res<<endl;
}