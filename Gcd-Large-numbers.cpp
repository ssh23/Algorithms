#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)return a;
	else 
		return(gcd(b,a%b));
}
int modulo(int a,string b)
{
     int mod = 0;

     for(int i=0;b[i]!='\0';i++)
     {
     	mod = (mod*10 + b[i] -'0')%a;
     }

     return mod;
}
int gcdLarge(int a,string b)
{
	int b2 = modulo(a,b);
     
    return(gcd(a,b2)); 
}
int main()
{
    #ifndef MG
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a;
	string b; 
	cin>>a;
	cin>>b;

	cout<<"The gcd of two numbers is "<<gcdLarge(a,b);
	return 0;	
}