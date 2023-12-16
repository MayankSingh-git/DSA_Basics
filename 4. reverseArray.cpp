#include <bits/stdc++.h>
using namespace std;

void reverseArray(int *dynamicArray,int n){

    int start=0;
    int end=n-1;
    while(start<end){
        int temp;
        temp = dynamicArray[start];
        dynamicArray[start] = dynamicArray[end];
        dynamicArray[end] = temp;
        start++;
        end--;
    }
    return;
}

int main() {
    int n;
    cin>>n;
    int * dynamicArray = new int[n];
    for(int i=0;i<n;i++){
        cin>>dynamicArray[i];
    }

    reverseArray(dynamicArray,n);

    for(int i=0;i<n;i++){
        cout<<dynamicArray[i]<<" ";
    }
    return 0;
}
