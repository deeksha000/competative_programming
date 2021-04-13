#include<iostream>
using namespace std;
#include<cmath>
#include <bits/stdc++.h>


int countingValleys(int n, string s) {

	int ans=0,valley =0;
	char a;
	int i=0;

while(i<n)

{   a=s[i];

    if(a=='U') 
    	ans=ans+1;

    else 
    	ans=ans-1;
    if(ans<0 ){
    while(ans<0 && i<=n)

    {

        char b=s[++i];

        if(b=='U') ans=ans+1;

        else ans=ans-1;

    }

    valley=valley+1;
    }
i++;

}

return  valley;

}

 

int main()

{

    int n;
    cin >> n;
    string s;
    cin>>s;
    int result = countingValleys(n, s);
    cout << result << "\n";

    return 0;

}

 

