#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>

int max(int m,int n,int h)
{
	if(m>n && m>h)
		return m;
	else if(n>m && n>h)
		return n;
	else return h;		
}

int main()
{
int r,c,max_ele=0;
cin>>r>>c;
int arr[r][c],a[r][c];
for(int x=1;x<=r;x++)
	for(int y=1;y<=c;y++)
		cin>>a[x][y];

arr[1][1]=a[1][1];
for(int i=2;i<=c;i++)
	if(a[1][i]==1 && arr[1][i-1]!=0)
		a[1][i]=a[1][i-1]+1;
	else if(arr[1][i-1]==1) arr[1][i]=1;
		
	else arr[1][i]=0;	
for(int j=2;j<=r;j++)
	if(a[j][1]==1 && arr[j-1][1]!=0)
		arr[j][1]=arr[j-1][1]+1;
	else arr[j][1]=0;
for(int x=2;x<=r;x++)
{				
	for(int y=2;y<=c;y++)
	{
		if(a[x][y]==1)
		{	int ans=max(arr[x-1][y-1],arr[x-1][y],arr[x][y-1]);
			
			arr[x][y]=ans+1;
			if(arr[x][y] > max_ele)
				max_ele = arr[x][y];
		}
	}		
}
cout<<max_ele;
return 0;
}
