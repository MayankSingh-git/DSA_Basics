#include<bits/stdc++.h>
using namespace std;
int linearSearch(int *dynamicArray,int n,int key){
    int index=-1;
    for(int i=0;i<n;i++){
        if(dynamicArray[i]==key){
            index=i;
        }
    }
return index;
}
int main(){
    int n,key;
    cin>>n;
    //cout<<"values stored in n: "<<n<<" and its address is: "<<(&n);
    //int arr[5];
    int * dynamicArray = new int[n];

    for(int i=0;i<n;i++){
        cin>>dynamicArray[i];
    }
    cin>>key;
    int answer=linearSearch(dynamicArray,n,key);
    cout<<answer;
    return 0;
}
