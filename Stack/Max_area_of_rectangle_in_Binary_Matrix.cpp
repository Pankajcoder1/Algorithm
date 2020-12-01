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
// define values.
// #define mod 1000000007
#define phi 1.618
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
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
/* ONLINE JUDGE */
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
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
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/
ll mah(vector<ll>v)
{
    ll n=v.size();
    vl nsl,nsr;
    ll maxo=0;
    // for nsl
    stack<pair<ll,ll>> st;
    st.push({0,-1});
    for(ll i=0;i<n;i++)
    {
        if(st.empty())
            nsl.pb(-1);
        else if(st.top().ff<v[i])
            nsl.pb(st.top().ss);
        else
        {
            while(st.size()>0&&st.top().ff>=v[i])
                st.pop();
            if(st.size()==0)
                nsl.pb(-1);
            else
                nsl.pb(st.top().ss);
        }
        st.push({v[i],i});
    }
    // for nsr
    stack<pair<ll,ll>> st1;
    st1.push({0,n});
    for(ll i=n-1;i>=0;i--)
    {
        if(st1.empty())
            nsr.pb(-1);
        else if(st1.top().ff<v[i])
            nsr.pb(st1.top().ss);
        else
        {
            while(st1.size()>0&&st1.top().ff>=v[i])
                st1.pop();
            if(st1.size()==0)
                nsr.pb(-1);
            else
                nsr.pb(st1.top().ss);
        }
        st1.push({v[i],i});
    }
    reverse(all(nsr));
    for(ll i=0;i<nsl.size();i++)
    {
        ll temp=abs(nsl[i]-nsr[i])-1;
        temp*=v[i];
        maxo=max(maxo,temp);
    }
    return maxo;
}

ll solve()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
            cin>>v[i][j];

    vector<vector<ll>> histogram(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(i==0)
                histogram[i][j]=v[i][j];
            else
            {
                if(v[i][j]==0)
                    histogram[i][j]=0;
                else
                    histogram[i][j]=histogram[i-1][j]+1;
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        vl row;
        for(ll j=0;j<n;j++)
        {
            row.pb(histogram[i][j]);
        }
        ans=max(ans,mah(row));
        row.clear();
    }
    cout<<ans<<endl;
    return 0;
}

int main()
{
    speed;
    //freopen("input.txt"a, "r", stdin);
    solve();
}

/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/
