//WAP to compute the sum of the first n terms of the following series
//S = 1+1/2+1/3+1/4+……

#include<iostream>
using namespace std;
int main()
{
    int i;
    float n,sum =0.;
    cout<<"enter any natural number";
    cin>>n;
    for(i =1 ;i<=n ;i++)
    {
        sum =sum + 1/i;
    }
    cout<<"sum of the series "<<sum;
    return 0;
}

