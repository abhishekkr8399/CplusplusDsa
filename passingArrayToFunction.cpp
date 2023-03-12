#include<iostream>
using namespace std;
void printArray(int arr[]){      //star is optional
    cout<<"In Function "<<sizeof(arr)<<endl;  //only address
    int n=sizeof(arr)/sizeof(int);
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void printArray2(int arr[],int n){      //star is optional
    cout<<"In Function "<<sizeof(arr)<<endl;  //only address
    arr[0]=100;
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
   int arr[]={1,2,3,4,5,6};
   int n=sizeof(arr)/sizeof(int);
   printArray2(arr,n);   
   cout<<"In Main "<<sizeof(arr)<<endl;   //actual array
   for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
   printArray(arr);   //pass by reference
   return 0;
}
