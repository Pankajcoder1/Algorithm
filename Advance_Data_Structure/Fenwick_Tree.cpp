/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
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
/*  -----------------------------------------------------------------------------------*/
// to run ctrl+b
ll getsum(vector<ll> v,vector<ll>& FenwickTree,ll index)
{
    ll sum=0;
    while(index>0)
    {
        cout<<"index is "<<index<<endl;
        sum+=FenwickTree[index];
        index-=(index&(-index));
    }
    return sum;
}

void update(vector<ll>& FenwickTree,ll index,ll n,ll value)
{
    while(index<=n)
    {
        FenwickTree[index]+=value;
        index+=(index&(-index));
    }
}
ll solve()
{
    cout<<"\tuse zero based indexing for query"<<endl;
    cout<<"size of array "<<endl;
    ll n,q,l,a,b;
    cin>>n;
    vector<ll> v(n,0);
    vector<ll> FenwickTree(n+1,0);
    cout<<"Enter element of array "<<endl;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        update(FenwickTree,i+1,n,v[i]);
    }
    cout<<"No of query "<<endl;
    cin>>q;
    while(q--)
    {
        cout<<"1.For update and 2. for sum"<<endl;
        cin>>l;
        if(l==1)
        {
            cout<<"Enter position and value "<<endl;
            ll pos=0,value;
            cin>>pos>>value;
            pos++;
            update(FenwickTree,pos,n,value);
        }
        else
        {
            cout<<"Sum upto:"<<endl;
            cin>>a;
            a++;
            ll sum=getsum(v,FenwickTree,a);
            cout<<"Required sum is "<<sum<<endl;
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
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/