#include<iostream>
using namespace std;
int power(int x, int n)
{int temp=1;
if(n==0)
    return 1;
temp=power(x,n/2);
if((n%2)==0)
    return (temp*temp);
else
    return (x*temp*temp);
}
int main()
{int x,n;
cout<<"Enter the no."<<endl; cin>>x; cout<<"Power"<<endl; cin>>n;
cout<<power(x,n); return 0;}
