#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int gridlandMetro(int n, int m, int k, vector<vector<int>> track) {
int a[n][m];
std::copy(track.begin(),track.end(),a);
int visited[n][m];
for(int x=0;x<n;x++)
	for(int y=0;y<m;y++)
		visited[x][y]=0;

int count =0;

if(k==0)

    return n*m;

for(int i = 1;i<=k;i++)

{
        int done =1;  

            for(int j=a[i][1];j<=a[i][2] && done == 1;j++)

            {   if(visited[a[i][0]][j]!=0)

                    {
                        done = 0;

                    }

            }

            if(done == 1)

            {

                for(int q=a[i][1];q<=a[i][2];q++)

                {

                    visited[a[i][0]][q]=1;

                }

            }

}

for(int c = 0;c<n;c++)

{

    for(int b = 0;b<m;b++)

    {

       /* if(visited[a][b]!=1)

        count++;
        */
        cout<<a[c][b]<<'\t';

    }
    cout<<"\n";

}

return count;

}

 

int main()

{

 int n,m,k;
 cin>>n;
 cin>>m;
 cin>>k;

    vector<vector<int>> track(k);

    for (int i = 0; i < k; i++) {

        track[i].resize(3);

 

        for (int j = 0; j < 3; j++) {

            cin >> track[i][j];

        }


    }

 

    int result = gridlandMetro(n, m, k, track);

 

    //cout << result << "\n";

 


 

    return 0;
}
