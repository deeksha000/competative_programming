#include<iostream>
using namespace std;
#include<deque>
#include<vector>

int findMin(int a[],int n,int k)
{
	deque <int> dq;
	vector <int> ans;
	for(int i=1;i<=n;i++)
	{
		while(!dq.empty() && a[dq.back()]>a[i])
		{
			dq.pop_back();
		}
		if(!dq.empty() && dq.front() == i-k)
			dq.pop_front();
		dq.push_back(i);

		if(i>=k)
		{       ans.push_back(a[dq.front()]);
			cout<<a[dq.front()]<<"\t";
		}	
	}
	return 1;
}

int main()
{
	int result;
	int n,k;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the sub array length";
	cin>>k;
	cout<<"enter the array";
	int a[n];

	for(int j=1;j<=n;j++)
	{
		cin>>a[j];
	}
	result = findMin(a,n,k);
	return 0;
}					

