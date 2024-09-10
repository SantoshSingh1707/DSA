//! Pascal Triangle
//? To find the Number at the position                    nCr
/*
#include <stdio.h>
int nCr(int n,int r){
    int result=1;
    for(int i=0;i<r;i++){
        result*=(n-i);
        result/=i+1;
    }
    return result;
}
int main(){
    int row=5,col=3;
    printf("Results :%d",nCr(row-1,col-1));
    return 0;
}
*/

//? Print the row of pascal Triangle
/*
#include <stdio.h>
int printRow(int row){
    int ans=1;
    printf("%d\t",ans);
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans/=i;
        printf("%d\t",ans);
    }
}
int main(){
    int row=6;
    printRow(row-1);
    return 0;
}
*/

//TODO Print Pascal Trinagle to row n



//! Majority Element  >N/3 Times
/*
#include <stdio.h>
int main(){
    int arr[]={1,1,1,1,2,2,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int cnt1=0,cnt2=0;
    int el1,el2;
    for(int i=0;i<size;i++){
        if(cnt1==0&&el2!=arr[i]){
            cnt1=1;
            el1=arr[i];
        }
        else if(cnt2==0&&el1!=arr[i]){
            cnt2=1;
            el2=arr[i];
        }
        else if(arr[i]==el1){
            cnt1++;
        }
        else if(arr[i]==el2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    int count1=0,count2=0;
    for(int i=0;i<size;i++){
        if(arr[i]==el1){
            count1++;
        }
        if(arr[i]==el2){
            count2++;
        }
    }
    if(count1>(size/3)+1){
        printf("%d\t",el1);
    }
    if(count2>(size/3)+1){
        printf("%d\t",el2);
    }
    return 0;
}
*/

//! Count Subarray with Xor as K
/*
#include <stdio.h>
int main(){
    int arr[]={4,2,2,6,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    int count=0;
    for(int i=0;i<size;i++){
        int xor=0;
        for(int i=0;i<size;i++){
            xor=xor^arr[i];
        }
        if(xor==k){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
*/ 

//! Merge two sorted array Without extra Space
/*
#include <stdio.h>
int sort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void Print(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int i=size1-1;
    int j=0;
    while (arr1[i]>arr2[j])
    {
        int temp=arr1[i];
        arr1[i]=arr2[j];
        arr2[j]=temp;
        i--,j++;
    }
    
    sort(arr1,size1);
    sort(arr2,size2);
    Print(arr1,size1);
    printf("\n");
    Print(arr2,size2);
    return 0;
}
*/

//! Finding the missing and repeating number
/*
#include <stdio.h>
int main(){
    int arr[]={4,3,6,2,1,1};
    int n=6;
    int size=sizeof(arr)/sizeof(arr[0]);
    int SN=(n*(n+1))/2,S2N=(n*(n+1)*(2*n+1))/6;
    int S=0,S2=0;
    for(int i=0;i<size;i++){
        S+=arr[i];
        S2+=(arr[i]*arr[i]);
    }
    int val1=S-SN;
    int val2=S2-S2N;
    val2=val2/val1;
    int x=(val1+val2)/2;
    int y=x-val1;
    printf("%d,%d",x,y);
    return 0;
}
*/

//! Count Inversion in the array
//? Brute Force Method
/*
#include<stdio.h>
int main(){
    int arr[]={5,3,2,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}
*/
//TODO Optimal Solution
