/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
typedef long long ll ;
typedef vector<ll> vl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// template
template <typename T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
// function
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0)
    {
        if(y%2==1)
        {
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s)
{
    return stoi(s);
}

string num_to_str(ll num)
{
    return to_string(num);
}
// datatype definination
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
class Point
{
    public:
        ll x;
        ll y;
        ll z;
        ll getsum()
        {
            return x+y+z;
        }
};
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll N=3e5+5;
vector<ll> tree(N,LONG_MAX);
vector<ll> v(N,0);
ll n,q;

void build(ll left,ll right,ll node){
	if(left==right){
		tree[node]=v[right];
	}
	else{
		ll mid=(right+left)/2;
		build(left,mid,2*node);
		build((mid+1),right,(2*node+1));
		tree[node]=min(tree[node*2],tree[2*node+1]);
	}
}

void update(ll left,ll right,ll node,ll pos,ll value){
	if(left==right){
		v[pos]=value;
		tree[node]=value;
	}
	else{
		ll mid=(left+right)/2;
		if(left<=pos&&pos<=mid)
			update(left,mid,2*node,pos,value);
		else
			update(mid+1,right,2*node+1,pos,value);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

ll query(ll left,ll right,ll node,ll l,ll r){
	if(l>right||r<left)
		return LONG_MAX;
	if(l<=left&&right<=r)
		return tree[node];
	ll mid=(left+right)/2;
	ll p1=query(left,mid,2*node,l,r);
	ll p2=query(mid+1,right,2*node+1,l,r);
	return min(p1,p2);
}

ll solve()
{
    // cout<<"Enter size of array and no of query : ";
    cin>>n>>q;
    // cout<<"Now enetr array : ";
    for(ll i=1;i<=n;i++)
    	cin>>v[i];
    build(1,n,1);
    while(q--){
    	char ch;
    	ll x,y;
    	cin>>ch>>x>>y;
    	if(ch=='q'){
    		ll ans=query(1,n,1,x,y);
    		cout<<ans<<endl;
    	}
    	else{
    		update(1,n,1,x,y);
    	}
    }
    return 0;
}

int main()
{
    speed;
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif */
    ll TestCase=1;
    // cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/