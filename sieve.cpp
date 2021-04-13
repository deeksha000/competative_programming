#include<iostream>
using namespace std;
const int nmax = 10001;
bool isprime[nmax];
int limit;
void sieve(int n){
	for(int i = 2; i<= n;i++)
		isprime[i]=true;
	for(int i= 2; i<=n/2 ; i++){
		if(isprime[i]){
			for(int j= i*2;j<= n; j+=i){
				isprime[j]=false;}
				}
		}
		}		

int main(){
	int x ;
	cout<<"enter number: ";
	cin>>x;
	sieve(x);
	cout<<"prime numbers are";
	for(int k=2;k<=x;k++){
		if(isprime[k]){
			cout<<k<<"\n";
			}
			}
			return 1;
	}
	

	
	

