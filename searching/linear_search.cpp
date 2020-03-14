#include<iostream>
using namespace std;
int linear_search(int *arr,int size,int element);

int main()
{
	int size,element,result;
	cout<<"Enter size of array : ";
	cin>>size;
	int *arr=new int[size];
	cout<<"Enter all the element of array : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Now enter element to search : ";
	cin>>element;
	result=linear_search(arr,size,element);
	if(result!=-1)
		cout<<"element found at "<<result+1<<"th position in array "<<endl;
	else
		cout<<"element not found in array"<<endl;
}

int linear_search(int *arr,int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}