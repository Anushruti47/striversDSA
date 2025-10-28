#include<iostream>
using namespace std;

int findlargest(int arr[],int size){
    int largest=arr[0];
    int i;
    for(i=0;i<size;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}

int findslargest(int arr[],int size){
    int max=findlargest(arr,size);
    int i, slargest=-1;
    for(i=0;i<size;i++){
        if(slargest<arr[i] && max>arr[i]){
            slargest=arr[i];
        }
    }
    return slargest;
}

int main(){
    int arr[]={23,43,76,88,33,54,78};
    int size,slargest;
    size=sizeof(arr)/sizeof(arr[0]);
    slargest=findslargest(arr,size);
    cout<<"Second largest element:"<<slargest;
}