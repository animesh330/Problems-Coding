#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[] , int n , int key){
    for(int i =0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {3,5,6,2,8,9,1,2,6,0,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    int in = linearsearch(arr , n , 10);
    cout<<in<<endl;
    return 0;
}


