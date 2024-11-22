#include<stdio.h>


int searchinsert(int arr[],int size,int target){
    int start=0;
    int end =size-1;
    int index=size;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
            break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            index=mid;
            end=mid-1;
        }
        
    }
    return index;
}
int main(){

    int arr[]={1,2,3,4,6,7,8,9};
    int target =3;
    int size=8;
   int result= searchinsert(arr,size,target);
   printf("%d",result);
    return 0;

}