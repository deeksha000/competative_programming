#include<iostream>
using namespace std;
#include<cmath>
 	
 int main(){
 	int max=100;
 	int a[max],n;
 	cout<<"Enter the number of elements";
 	cin>>n;
 	cout<<"Enter the elements";	
 	for(int x =1;x<=n;x++){
 		cin>>a[x];
 		}
 	int ans = a[1],sum =0;
 	for(int i =1;i<=n ; i++){
 		sum += a[i];
 		if(sum>ans){
 			ans = sum;
 			}
 		if(sum<0){
 			sum=0;
 			}
 		}
 		
 	cout<<"The max sum is : "<<ans;
 	return 1;
 	}
