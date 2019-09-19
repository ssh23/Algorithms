#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)return (a);
	else 
		return(gcd(b,a%b));
}
int main()
{
    #ifndef MG
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n1,n2;
	cin>>n1>>n2;

	cout<<"The gcd of two numbers is "<<gcd(n1,n2);
	return 0;	
}