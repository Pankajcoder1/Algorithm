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
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;
typedef map<int,int>mi;
typedef map<ll,ll> ml;
typedef set<string> ss;
typedef set<char>sc;
typedef set<int> si;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 10e9+9LL
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
#define Endl "\n"
// loops
#define loop(i,start,end) for(ll i=ll(start);i<ll(end);i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// function

ll power(ll x,   ll y, ll p)  
{  
    ll res = 1;      
    x = x % p;             
    while (y > 0)  
    {    
        if (y & 1)  
            res = (res*x) % p;   
        y = y>>1; 
        x = (x*x) % p;  
    }  
    return res;  
} 
/* ascii value 
A=65,Z=90,a=97,z=122 1=49
*/
/*  -----------------------------------------------------------------------------------*/
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
 
void multiply(ll F[2][2], ll M[2][2]); 
void power(ll F[2][2], ll n);  
ll fib(ll n) 
{ 
	ll F[2][2] = {{1, 1}, {1, 0}}; 
	if (n == 0) 
		return 0; 
	power(F, n - 1);
	return F[0][0]; 
} 

void power(ll F[2][2],ll n) 
{ 
	if(n == 0 || n == 1) 
	return; 
	ll M[2][2] = {{1, 1}, {1, 0}}; 
	
	power(F, n / 2); 
	multiply(F, F); 
	
	if (n % 2 != 0) 
		multiply(F, M); 
} 

void multiply(ll F[2][2], ll M[2][2]) 
{ 
	ll x = F[0][0] * M[0][0] + F[0][1] * M[1][0]; 
	ll y = F[0][0] * M[0][1] + F[0][1] * M[1][1]; 
	ll z = F[1][0] * M[0][0] + F[1][1] * M[1][0]; 
	ll w = F[1][0] * M[0][1] + F[1][1] * M[1][1]; 
	F[0][0] = x%1000000007; 
	F[0][1] = y%1000000007; 
	F[1][0] = z%1000000007; 
	F[1][1] = w%1000000007; 
} 

int main() 
{
	ll n;
	cin>>n;
	cout << fib(n)<<endl;
	return 0; 
} 
