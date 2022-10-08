#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {3,5,6,2,8,9,1,2,6,0,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr+n);

    int in = binarysearch(arr , n , 10);
    cout<<in<<endl;
    return 0;
}


