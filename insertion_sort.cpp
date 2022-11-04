#include <iostream>

using namespace std;
void insertion_sort(int arr[], int n){
    int max; 
    int i,j; 
    for(int i=1;i<n;i++){
        max=arr[i]; 
        j=i-1; 
        while(j>=0 && arr[j]>max){
            arr[j+1]=arr[j]; 
            j=j-1; 
        }
        arr[j+1]=max; 
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}
int main()
{
    int arr[]={5,3,2,1,4,6}; 
    int n=6; 
    insertion_sort(arr,n); 
    print(arr,n);

    return 0;
}
