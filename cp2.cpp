#include <iostream>
using namespace std;
#include<vector>
#include<stack>
using namespace std;

int type(char c){

     if(c=='}' )

        return 1;

     else if(c==']')

        return 3;

     else if(c==')')

        return 5;   
     else if (c=='{' )

        return 2;

     else if(c=='[')

        return 6;

     else if(c=='(')

        return 10;        

 }

 

string isBalanced(string s) {

    stack <char> st;

    for(int i=1;i<=s.size();i++){

        if(s[i]=='{' || s[i]=='[' || s[i]=='(')

            st.push(s[i]);            

        else{

            if(!st.empty() && type(st.top())==2*type(s[i]))

                st.pop();

        }

    }

if(st.empty())

    return "YES";

else

    return "NO";    

}

 

int main()

{
    int t;

    cin >> t;


    for (int t_itr = 0; t_itr < t; t_itr++) {

        string s;

        cin>>s;

 

        string result = isBalanced(s);

 

        cout << result << "\n";

    }

    return 0;

}
