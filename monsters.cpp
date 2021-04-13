#include<iostream>
using namespace std;
#include<queue>

int main()
{
	int ans=0,n,x,k;
	priority_queue<int>pq;
	cout<<"enter the number of monsters :  ";
	cin>>n;
	int monster[n];
	cout<<"enter the number of magics : ";
	cin>>k;
	cout<<"Enter the strength x : ";
	cin>>x;
	cout<<"Enter the strengths : ";
	for(int i=1;i<=n;i++)
		cin>>monster[i];
	for(int i=1;i<=n;i++)
	{
		cout<<"monster strength"<<monster[i]<<endl;
		if(monster[i]<0)
		{
			x=x-monster[i];
			ans++;
		}
		else
		{
			if(x<monster[i] && k==0)
				break;	
			else
			{
				ans++;
				x=x-monster[i];
				cout<<"x : "<<x<<" k : "<<k<<endl;
				pq.push(monster[i]);
				if(x<0)
				{
					k--;
					x=x+pq.top();
					pq.pop();
				}
			}			
		}	
	}
	
	cout<<"Number of monsters killed : "<<ans;
	return 0;
}		
