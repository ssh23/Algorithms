#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int i,k=0;
		char ch;
		cin>>s;
		stack<char> st;
		for(i=0;i<s.length();i++)
		{
           if(s[i]=='{'||s[i]=='('||s[i]=='[')
           {
           	st.push(s[i]);
           }
           else if(s[i]=='}'||s[i]==')'||s[i]==']'&& !st.empty())
           {
           	ch=st.top();
           	st.pop();
           	if(ch!=s[i])
           	 {
           	 	cout<<"NO"<<"\n";
           	 	break;
           	 }
           
           }
           else
           {
           	cout<<"NO"<<"\n";
           	 	break;
           }
           k++;
		}
		if(k==s.length())
			cout<<"YES"<<"\n";
	}
	return o;
}