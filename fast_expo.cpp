#include<iostream>
using namespace std;
#include<cmath>
int ans=1;
int a,m;
long long n;

int fastExpo(int a, long long n,int m){
	while(n>1){
	if(n%2==0){
		a= (1LL*a*a)%m;
		n/=2;
	}
	else{
		ans= (1LL*ans*a)%m;
		n=n-1;
		}
	}
	return ans;
	}	
	
	int main(){
	cout<<"enter a,n and m: "<<"\n";
	cin>>a>>n>>m;
	int y= fastExpo(a,n,m);
	cout<<"a power n mod m is : "<<y;
	}

