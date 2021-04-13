#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int connectedCell(vector<vector<int>> matrix, int n , int m) {

int visited[n][m],mat[n][m];

visited[0][0] = matrix[0][0];
for(int i=0;i<n;i++)
  for(int j = 0;j<m;j++)

 {
  visited[i][j] = 0;

 }

int count=0 , max_val = 0;


for(int x=0;x<n;x++)

 {   for(int y = 0;y<m;y++)

    {
			if(matrix[x][y]!=0 && (visited[x-1][y-1]!=0 || visited[x][y-1] !=0  || visited[x-1][y]!=0))
                    		visited[x][y]=1+std::max(visited[x-1][y-1] ,std::max(visited[x][y-1],visited[x-1][y]));

    }
 }

 for(int a=0;a<n;a++)

 {   for(int b = 0;b<m;b++)

 {

     if(max_val < visited[a][b])
     max_val = visited[a][b];
     cout<< visited[a][b]<<"\t";

 }
cout<<"\n";
 }

    return max_val;

}

 

int main()

{
    int n;

    cin >> n;

    int m;

    cin >> m;

    vector<vector<int>> matrix(n);

    for (int i = 0; i < n; i++) {

        matrix[i].resize(m);

        for (int j = 0; j < m; j++) {

            cin >> matrix[i][j];

        }
    }

 

    int result = connectedCell(matrix,n,m);

 

    cout << result << "\n";

    return 0;

}
