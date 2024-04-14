#include<iostream>
using namespace std;
int main()
{
    int n,count=0,sum=0;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
           if(s[j]=='A')
           {
               count++;
           }
           else
           {
               sum++;
           }

        }
        if(count>sum)
        {
            cout<<"A"<<endl;

        }
        else
        {
            cout<<"B"<<endl;
        }
        count =0;
        sum=0;
    }
}
