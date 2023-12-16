#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *dynamicArray,int n,int key){
    int index=-1;
    int start=0;
    int end=n-1;
    while(start<end){
        int middle=(start+end)/2;
        //middle is the key
        if(key==dynamicArray[middle])
        {
            index=middle;
            start++;
            end--;
        }
        //key is less middle element
        else if(key<dynamicArray[middle])
        { 
            end=middle-1;
        }
       else if(key>dynamicArray[middle])
       {
           start=middle+1;
       }
    }
       return index;
}

int main() {
    int n,key;
    cin>>n;
    int * dynamicArray = new int[n];
    for(int i=0;i<n;i++){
        cin>>dynamicArray[i];
    }
    cin>>key;
    int answer=binarySearch(dynamicArray,n,key);
    cout<<answer;
    return 0;
}




/* Vector Explaination */


    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(5);
    // arr.push_back(15);
    // cout<<arr[0]<<", "<<arr[1]<<", "<<arr[2];
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int temp;
    //     cin>>temp;
    //     arr.push_back(temp);
    // }
    // int *arr= new int[n];
    // for(int i=0;i<n;i++){
    //     int temp;
    //     cin>>temp;
    //     arr[i]=temp;
    // }
