#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


long convert(long N){
	//long n = ((N)?floor( log10(N)/log10(2) ) + 1:0);
	int  bin[32] = {0};
	long i = 31;

	while(N!=0) {

	    bin[i]=N%2;
	    
	    N/=2;

	    i--;

	}
	string str;
	for(int x = 0;x<32 ; x++)
	{
		 if(bin[x]==0)
		   {bin[x]=1;
		   str += to_string(bin[x]);
		   }
		 else{
		  bin[x]=0;  
		  str += to_string(bin[x]);
		 }
	}
	long num=0;
	int lent = str.length();
	while(lent>0)
	{
		 if(str[str.length()-lent]=='1')  num += pow(2,lent-1);
		 lent--;
	}
	return num;
}

int main()
{ long number;
 number = convert(8);
 cout << number;
return 1;
}


