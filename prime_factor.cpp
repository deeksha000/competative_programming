#include<iostream>
#include<cmath>
using namespace std;
int f[100],ex[100];
int len;

void primefact(int n){
	int d= 2;
	 len =0;
	 if(n==1){
	 	len++;
	 	f[len]=2;
	 	ex[len]=0;
	 	return;
	 	}
	while(n>1 && d<= sqrt(n)){
		int k=0 ;
		while(n%d == 0){
			k++;
			n/=d;
			}
		if(k>0){
			len++;
			f[len]=d;
			ex[len]=k;
			
			}
		d++;
		}
		if(n>1){
		f[len]=n;
		ex[len]=1;
		}
	
		}
int main(){
	int x ;
	cout<<"enter a number :  ";
	cin>>x;
	primefact(x);
	for(int i =1 ; i<=len;i++){
		cout<<f[i]<<" "<<ex[i]<<"\n";
		}
	return 0;
	}		
				
