#include <iostream>

using namespace std;
void selection_sort(int arr[],int n){
    int i,j,min; 
    for(i=0;i<n;i++){
        min=i; 
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j; 
            }
        }
        if(min!=i){
            int temp=arr[i]; 
            arr[i]=arr[min]; 
            arr[min]=temp;
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
    int arr[]={5,3,2,1,4,6}; 
    int n=6; 
    selection_sort(arr,n); 
    print(arr,n);

    return 0;
}
