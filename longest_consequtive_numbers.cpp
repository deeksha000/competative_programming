#include<iostream>
using namespace std;
#include<cmath>
#include<algorithm>

const int nmax = 1000;
 int fr[nmax];
 int a[nmax];
 int max(int x, int y)
 {
 	if(x>y)
 		return x;
 	return y;
 }
 int min(int x, int y)
 {
 	if(x<y)
 		return x;
 	return y;
 } 	
 		
 
 int longest(int a[nmax],int n)
 {
 	int ans=0;
 	for(int left = 1; left<= n; left++)
 	{
 		for(int i =1 ; i<n ; i++)
 			fr[i]= false;
 		int Min = a[1],Max = a[1];	
 		for(int right = left; right<=n; right++)
 		{
 			if(fr[a[right]] == true)
 				break;
 			else
 			{
 				fr[a[right]] = true;
 				Min = min(Min,a[right]);
 				Max = max(Max,a[right]);
 				if(right-left == Max-Min)
 					ans= max(ans, right-left+1);
 			}
 		}
 	}
 	return ans;
 	}
 	
 int main(){
 	int n ;
 	cout<<"enter the number of elements and array";
 	cin>>n;
 	for(int i=1;i<=n;i++)
 	{
 		cin>>a[i];
 		}
 	int result = longest(a,n);
 	cout<<result;
 	return 1;
 	}							
 				
