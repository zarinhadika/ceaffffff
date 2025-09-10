#include<bits/stdc++.h>
using namespace std;
double f(double x,double y)
{
    return (x+y);
}
double eulersMethod(double x,double y,double h)
{


    for(int i=1;i<=3;i++)
    {

        y=y+h*f(x,y);
         x=x+h;

    }
   return y;
}
int main()
{
    cout<<eulersMethod(0,0,0.2)<<endl;

}
