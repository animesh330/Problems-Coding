#include<bits/stdc++.h>
using namespace std;
// brute force approach
void rearrange(int* arr , int n){
        int i =0;
    	int j = n-1;
    	vector<int>v;
    	while(i<=j){
            
    	    v.push_back(arr[j]);
            
    	    v.push_back(arr[i]);
    	    i++;
    	    j--;
    	}
        for(int i =0;i<n;i++){
            arr[i] = v[i];
        }
}



int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    rearrange(arr , n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}