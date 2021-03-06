#include <iostream> 
using namespace std; 
  
int maxSum(int arr[], int n, int k) 
{ 
    if (n < k) 
    { 
       cout << "Invalid"; 
       return -1; 
    } 
  
    int res = 0; 
    for (int i=0; i<k; i++) 
       res += arr[i]; 
  

    int curr_sum = res; 
    for (int i=k; i<n; i++) 
    { 
       curr_sum += arr[i] - arr[i-k]; 
       res = max(res, curr_sum); 
    } 
  
    return res; 
} 


int main() 
{ 
    int arr[1000]; 
    int n,i,k;

    cout<< "Enter the size of array: "<<endl;
    cin>>n; 

    cout<< "Enter the array: "<<endl;
    for (i=0; i<n; i++){
        cin>>arr[i];
    }    

    cout<< "Enter a positive: "<<endl;
    cin>>k;
    
    cout << maxSum(arr, n, k); 
    return 0; 
} 