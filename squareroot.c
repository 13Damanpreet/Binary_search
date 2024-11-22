#include<stdio.h>

int squareroot(int target){
    int start=0;
    int end=target;
    int mid;
    int ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid==target/mid){
            return mid;
            break;
        }
        else if(mid<target/mid){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}





int main(){
    int target;
    printf("Enter the number of which you want to find squareroot : ");
    scanf("%d",&target);
    int result=squareroot(target);
    printf("Squareroot of %d is : %d ",target,result);


    return 0;
}