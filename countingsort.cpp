#include <iostream>

using namespace std;
int max_element(int arr[], int n){
    int max=arr[0]; 
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max; 
}
void count_sort(int arr[], int n){
    int max=max_element(arr,n); 
    int count[max+1]={0}; 
    // for(int i=0;i<=max;i++){
    //     count[i]=0;
    // }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    
    int index=0; 
    for(int i=0;i<=max;i++){
        while(count[i]--){
            arr[index++]=i;
        }
        
    }
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,4,3,4,5,3,2,3,3,3,3,4}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    count_sort(arr,n); 
    print(arr,n);

    return 0;
}
