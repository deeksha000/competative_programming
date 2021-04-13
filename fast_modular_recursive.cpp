#include<iostream>
#include<cmath>
using namespace std;
int a,n,m;
int power(int a, int n,int m){
	if(n==1){ 
	 return(a%m);
	 }
	else if(n %2==0){  
		int p =pow(power(a,(n/2),m),2);
		int q = p%m;
	return q;
	}
	else{ 
	int x =a*(power(a,(n-1),m) );
	return (x%m);
	}
	}
	
int main(){
	cout<<"enter a,n and m: "<<"\n";
	cin>>a>>n>>m;
	int y = power(a,n,m);
	cout<<"a power n mod m is : "<<y;
	}	
	
