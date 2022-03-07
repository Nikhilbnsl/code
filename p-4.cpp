//WAP to compute the sum of the first n terms of the following series
//S =1-2+3-4+5…………….
#include<iostream>
using namespace std;
int main ()
{
    int i;
    int sum =0,n;
    cout<<"enter any natual number";
    cin>>n;
    for(i=1;i<=n;i++)
    { if(i%2==0)
    sum = sum-i;
    else
        sum = sum+i;
    }
    cout<<"sum of natural series"<<sum;
    return 0;
}
