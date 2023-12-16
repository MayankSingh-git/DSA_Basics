#include <bits/stdc++.h>
using namespace std;

pair<int,int> sortedPairSum(int *arr, int n, int key){
    pair<int,int> p;
    p.first=-1;
    p.second=-1;
    int start=0;
    int end=n-1;
    while(start<end){
        int currentSum=arr[start]+arr[end];
        if(currentSum==key){
            p.first=start;
            p.second=end;
            return p;
        }
        if(currentSum>key){
            end--;
        }
        if(currentSum<key){
            start++;
        }
    }
    return p;
}
int main()
{
    int n, key;
    cin>>n;
    int * arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin >>key;
    pair<int,int> ans=sortedPairSum(arr,n,key);
    cout<<ans.first<<" "<<ans.second;

    return 0;
}
