#include<iostream>
using namespace std;

void printactivity(int s[],int f[],int n)
{
	int i=0;
	int temp=f[i];
	cout<<"activity selected is "<<i<<" ";
	for(int j=1;j<n;j++)
	{
		temp=f[i];
		if(s[j]>=temp)
		{
			cout<<j<<" ";
			i=j;
		}
	}
}
int main()
{
	int s[]={1,3,0,5,8,5};
	int f[]={2,4,6,7,9,9};
	int n=(sizeof(f)/sizeof(f[0]));
	printactivity(s,f,n);
}