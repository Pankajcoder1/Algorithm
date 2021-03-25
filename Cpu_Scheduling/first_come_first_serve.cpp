#include<iostream>
using namespace std;

int main()
{
	int no_of_process,temp;
	float sum=0;
	cout<<"enter no of process : ";
	cin>>no_of_process;
	int *arrival_time=new int(no_of_process);
	int *compilation_time=new int(no_of_process);
	cout<<"now enter arrival time of all process : ";
	for(int i=0;i<no_of_process;i++)
	{
		cin>>arrival_time[i];
	}
	cout<<"now enter burst time of all process : ";
	for(int i=0;i<no_of_process;i++)
	{
		cin>>temp;
		sum=sum+temp;
		// I directly compute compilation time.
		compilation_time[i]=sum;
	}
	cout<<"Now T.A.time of each process is : ";
	sum=0;
	for(int i=0;i<no_of_process;i++)
	{
		cout<<(compilation_time[i]-arrival_time[i])<<" ";
		sum=sum+compilation_time[i]-arrival_time[i];
	}
	cout<<"\nAverage T.A time time is : "<<sum/no_of_process<<endl;
	cout<<"Now wating time of each process is : ";
	sum=0;
	for(int i=0;i<no_of_process;i++)
	{
		cout<<(compilation_time[i-1]-arrival_time[i])<<" ";
		sum=sum+compilation_time[i-1]-arrival_time[i];
	}
	cout<<"\nNow average wating time of all process is : "<<sum/no_of_process<<endl;
}