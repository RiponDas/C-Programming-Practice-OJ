#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        long long int tempa=0, sum=0,r;
    for(int i=0;i<n;i++){
            tempa=tempa+a[i];
        r=tempa/m;
        r=r-sum;
    cout<<r<<" ";
    sum =sum+r;
    }
    return 0;
}
