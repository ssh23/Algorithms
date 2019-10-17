#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,s,a,j=0;
    cin>>n>>k;
    set<int> ss;
    set<int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>a;
        ss.insert(a);
    }
    i=0;
    it=ss.begin();
    auto itt=next(it,1);
    while(*it<k && ss.size>=2 &&j<n)
        {
            s=*it+((*itt)*2);
            //it=s;
            //itt=s;
            ss.erase(*it);
            ss.erase(*itt);
            ss.insert(s);
              j++;
              it=ss.begin();
              itt=next(it,1);        }

    if(j>=0)
    cout<<j;
    else
    cout<<"-1";
    return 0;
}
