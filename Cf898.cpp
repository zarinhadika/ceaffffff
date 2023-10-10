#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s=="abc"||s=="acb"||s=="bac"||s=="cba")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
