#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<unordered_map>
#include <utility> 
#include <algorithm> 
 
bool sortinrev(const pair<float,int> &a,  
               const pair<float,int> &b) 
{ 
       return (a.first > b.first); 
} 
int main(){
	cout<<"enter the number of objects";
	int n,bag_capacity,weight,profit;
	cin>>n;
	cout<<"Enter the bag capacity";
	cin>>bag_capacity;
	unordered_map<int,int>object;
	vector<pair<float,int>>vec;
	//priority_queue<pair<double,int>>pq;
	for(int i=1;i<=n;i++)
	{
		cin>>weight>>profit;
		//double profitperweight = double(profit/weight);
		//cout<<"profitperweight"<<float(profit/weight);
		//pq.push(make_pair(double(profit/weight),weight));
		object[weight]=profit;
		
		vec.push_back(make_pair(float(profit/weight),weight));
		cout<<"profit_per_weight"<<float(profit/weight);
	}
	sort(vec.begin(),vec.end(),sortinrev);
	cout<<"try"<<object[18]<<endl;
	double pro = 0.0;
	while(bag_capacity>0)
	{
		/*if(pq.top().second <= bag_capacity)
		{	
			bag_capacity -= pq.top().second;
			int p= object[pq.top().second];
			cout<<"top profitperweight"<<pq.top().first<<endl;
			pro += p;
			pq.pop();
		}
		else
		{
			cout<<(pq.top().first*bag_capacity);
			pro += (pq.top().first*bag_capacity);
			bag_capacity = 0;
			
			break;
		}*/
		
		if(vec[0].first <= bag_capacity){
			bag_capacity -= vec[0].second;
			int p = object[vec[0].second];
			cout<<"begin profit_per_weight"<<vec[0].first<<"profit"<<p;
			pro += p;
			vec.erase(vec.begin());
			
		}
		else{
			cout<<vec[0].first*bag_capacity;
			float add=vec[0].first*bag_capacity;
			pro += add;
			bag_capacity=0;
			
		}
	}
	cout<<"Totla Profit: "<<pro;
	return 1;
	}			
				
	
	
