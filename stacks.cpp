#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100000],i;
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	stack<int> s;
	int j=1;

	for(i=0;i<n;i++)
	{
		s.push(a[i]);
		while(!s.empty() && s.top()==j)
		{
			j++;
			s.pop();
		}
	}

	if(s.empty()){
        cout<<"Happy"<<endl;
    }else{
        cout<<"Sad"<<endl;
    }

}