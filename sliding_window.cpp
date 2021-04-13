#include<iostream>
using namespace std;

const int nmax = 10000;
int fr[nmax];

int max(int a, int b)
	{
	if(a>b)
		return a;
	return b;
	}	

int slide(int *a,int n,int k){
	int ans = 0, right,count=0;
	for(right =1;right<=n;right++)
	{
		if(++fr[a[right]]==1)
			count++;
		if(count>k)
			break;
	}
	if(count <= k)
		return count;
	if(--fr[a[right]]==0)
		count--;
	right--;
	ans=right;	
	for(int left = 2; left<=n; left++)
	{
		if(--fr[a[left-1]]==0)
			count--;
		while(right<n)
		{
			if(++fr[a[right]]==1)
				count++;
			if(count>k)
				break;
		}
		
		
		if(count <= k)
			return max(ans,n-left+1);
		if(--fr[a[right]]==0)
			count--;
		ans = max(ans,left-right+1);
	}
	}		
int main(){
	int n, a[nmax],k,result;
	cout<<"enter n and k : ";
	cin>>n>>k;
	cout<<"enter the array ";
	for(int i =1; i<=n; i++){
		cin>>a[i];
		}
	result=slide(a,n,k);
	cout<<result;
	return 0;
	}
	
				
								
