#include <bits/stdc++.h> 
using namespace std; 
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 

        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 

        return binarySearch(arr, mid + 1, r, x); 
    } 

    return -1; 
} 
  
int main(void) 
{ 
    int i,j,n,q;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>q;
    int que[q];
    for(i=0;i<q;i++)
        cin>>que[i];
    for(i=0;i<q;i++)
    {
    int result = binarySearch(arr, 0, n - 1, que[i]); 
    cout<<result<<" ";
    }
    return 0; 
}