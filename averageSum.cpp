#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5];
cin>>arr[0] >>arr[1] >>arr[2] >>arr[3] >>arr[4];
int sum=0;
int avg=0;
for (int i=0; i<5; i++)
{
    sum = sum + arr[i];
}
avg = sum/5;
cout << "Average of 5 numbers is:"<<avg << '\t' <<sum;
//printf("Avg:",avg)
return 0;
}
