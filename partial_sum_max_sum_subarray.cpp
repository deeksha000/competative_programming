#include<iostream>
using namespace std;
#include<cmath>
 	
 int main(){
 	int max=100;
 	int a[max],s[max],n,c,m;
 	cout<<"Enter the number of elements";
 	cin>>n;
 	cout<<"Enter the elements";	
 	for(int x =1;x<=n;x++){
 		cin>>a[x];
 		}
 		s[1]=a[1];
 	for(int y = 2;y<= n;y++){
 		s[y]= s[y-1]+a[y];
 		}	
 	int ans = a[1],mins=a[1];
 	for(int i =1;i<=n ; i++){
 
 		if((s[i]-mins)>ans){
 			c= i;
 			ans = s[i]-mins;
 			}
 		if(mins>s[i]){
 			m = mins;
 			mins=s[i];
 			}
 		}
 		
 	cout<<"The max sum is : "<<ans<<"\n";
 	cout<<c<<","<<m;
 	return 1;
 	}
