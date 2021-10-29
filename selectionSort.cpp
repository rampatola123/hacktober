#include<iostream>
 void min(int val[],int n){
    for(int i=0;i<n;i++)
    {
       int temp;
    
        int min= i;
        for(int j=i+1;j<n;j++){
            if(val[j]<val[min])
              min=j;
        }
        if(i!=min){
            temp=val[min];
            val[min]=val[i];
            val[i]=temp;
        }
    }
    std::cout<<"sorted aray is";
    for(int i=0;i<n;i++)
    {
        std::cout<<val[i]<<" ";
    }
 }
 int main()
 {
     int arr[10]= {5,3,2,8,4,9,14,25,5,7,};
     int n=sizeof(arr)/sizeof(arr[0]);
     min(arr,n);
     return 0;
 }