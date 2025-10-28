#include<iostream>
using namespace std;

int findLargest(int arr[],int size){
    int i,max;
    max=arr[0];
    for(i=0;i<size;i++){
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}

int main(){
    int arr[]={23,65,78,11,44,89};
    int max,size;
    size=sizeof(arr)/sizeof(arr[0]);
    max=findLargest(arr,size);
    cout<<"Largest element:"<<max;
}