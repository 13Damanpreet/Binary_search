#include<stdio.h>
 int elementsorted(int arr[],int size,int target){
    int mid, start=0,end=size-1;
    while(start<=end){
    mid=start+(end-start)/2;

    if(arr[mid]==target){
        return mid;
    }
//---------------------------------

if(arr[start]<=arr[mid]){//LEFT SORTED
    if(arr[start]<=target && target<=arr[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
}
else{//Right sorted
if(arr[mid]<=target && target<=arr[end]){
    start=mid+1;
}
else{
    end=mid-1;
}
             }
        }
return -1;
}

//------------------------------------------------------------------------
int main(){
     int arr[]={4, 5, 6, 7, 0, 1, 2};
     int target=2;
     int size=sizeof(arr)/sizeof(arr[0]);
        int res= elementsorted(arr,size,target);
        printf("Index of %d = %d",target,res);


    return 0;
}