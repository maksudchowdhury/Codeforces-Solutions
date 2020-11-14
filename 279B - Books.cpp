#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,t,start=0,ending=0;
    cin>>n>>t;
    long int arr[n];
    for(long int i=0;i<n;i++){
        cin>>arr[i];
        t-=arr[i];
        if(t<0 && i<n){
            t+=arr[start];
            start++;
        }
        if(t==0 || i==n-1) ending=i;
    }
    for(int i=start;i<ending;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<ending-start+1;
}
