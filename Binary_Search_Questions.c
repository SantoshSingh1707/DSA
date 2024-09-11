//? Iterative way
/*
#include <stdio.h>
int BinarySearch(int *arr,int size,int target){
    int low=0;
    int high=size-1;
    int mid;
    mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
            mid=(low+high)/2;
        }
        else if(arr[mid]<target){
            low=mid+1;
            mid=(low+high)/2;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,4,6,7,9,12,16,17};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    printf("Target is at index %d",BinarySearch(arr,size,target));
    return 0;
}
*/

//? Recursive way
/*
#include<stdio.h>
int BSRecursive(int *arr,int target,int low,int high){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return BSRecursive(arr,target,low,mid-1);
    }
    else if(arr[mid]<target){
        return BSRecursive(arr,target,mid+1,high);
    }
}
int main(){
    int arr[]={3,4,6,7,9,12,16,17};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    printf("Target is at index %d",BSRecursive(arr,target,0,size-1));
}
*/

//! Lower Bound
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,3,5,8,8,10,10,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=size;
    int taregt=9;
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=taregt){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    printf("%d",ans);
    return 0;
}
*/

//! Upper Bound
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,3,5,8,8,10,10,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=size;
    int target=10;
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    printf("%d",ans);
    return 0;
}
*/

//! First and Last occurance of the number x
/*
#include <stdio.h>
int lb(int *arr,int size,int target){
    int ans=size;
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int hb(int *arr,int size,int target){
    int ans=size;
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,3,5,8,8,10,10,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    
    if(lb(arr,size,target)==size||arr[lb(arr,size,target)]!=target){
        printf("-1,-1");
        return 0;
    }
    printf("%d ,%d",lb(arr,size,target),hb(arr,size,target)-1);
    return 0;
}
*/

//! Search element in rotated sorted array [Unique Element]
//? [1,2,3,4,5]=Sorted array            [4,5,1,2,3]=Rotated sorted array
/*
#include<stdio.h>
int search(int *arr,int size,int target){
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        //?Left Sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target&&target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        //?Right Sorted
        else{
            if(arr[mid]<=target&&target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={7,8,9,1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=1;
    printf("%d",search(arr,size,target));
}
*/
//!TODO Search Element in rotated sorted array [Contaning Dupliactes]
