//! 2 Sum Problem
//? Brute Force
/*
#include <stdio.h>
int main(){
    int arr[]={2,6,5,8,11};
    int target=14;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                printf("Yes %d,%d",i,j);
                return 0;
            }
        }
    }
    printf("no");
    return 0;
}
*/

//? Two Pointer Approach But Firts Sort the array
/*
#include <stdio.h>
int main(){
    int arr[]={2,5,6,8,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=14;
    int i=0,j=size-1;
    while (i<j)
    {
        if(arr[i]+arr[j]<target){
            i++;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]==target){
            printf("Yes");
            return 0;
        }
    }
    printf("no");
    return 0;
}
*/

//! Sort an array of 0s ,1s and 2s
//? Better Solution
/*
#include <stdio.h>
int main(){
    int arr[]={0,1,2,0,1,2,1,0,0,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count1=0,count2=0,count0=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    int i=0;
    while(count0!=0){
        arr[i++]=0;
        count0--;
    }
    while(count1!=0){
        arr[i++]=1;
        count1--;
    }
    while(count2!=0){
        arr[i++]=2;
        count2--;
    }
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

//? Optimal Solution
/*
#include <stdio.h>
int main(){
    int arr[]={0,1,2,0,1,2,1,0,0,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0,mid=0,high=size-1;
    while(mid<=high){
        if(arr[mid]==0){
            int temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            low++,mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

//! Majority Element             Element> N/2
/*
#include <stdio.h>
int main(){
    int arr[]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int cnt=0,ele;
    for(int i=0;i<size;i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }
        else if(ele=arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<size;i++){
            if(arr[i]==ele){
                cnt1++;
            }
        }    
    if(cnt1>size/2){
            printf("Yes");
        }
        else{
            printf("No");
        }
    return 0;
    }

*/

//! Maximum Subarray sum
/*
#include <stdio.h>
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int maxi=-1;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    printf("%d\t",maxi);
    return 0;
}
*/

// TODO Next Permutation

//! Rearange the array elements according to sign
/*
#include <stdio.h>
int main(){
    int arr[]={3,1,-2,-5,2,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans[size];
    int pos=0,neg=1;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            ans[neg]=arr[i];
            neg+=2;
        }
        else{
            ans[pos]=arr[i];
            pos+=2;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\t",ans[i]);
    }
    return 0;
}
*/

//! Leaders int the array                   To the right of element everthing is samller
/*
#include <stdio.h>
int main(){
    int arr[]={10,22,12,3,0,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxi=0;
    for(int i=size-1;i>=0;i--){
        if(arr[i]>maxi){
            printf("%d\t",arr[i]);
            maxi=arr[i];
        }
    }
    return 0;
}
*/

//! Set the matrix Zeros
/*
#include <stdio.h>
int main(){
    int n=4,m=4;
    int mat[4][4]={{1,1,1,1},
                   {1,0,1,1},
                   {1,1,0,1},
                   {1,0,0,1}
                   };
    int row[n];
    int col[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                col[j]=1;
                row[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1||col[j]==1){
                mat[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

//! Rotate the matrix image by 90deg Clockwise
/*
1   2   3   4          13   9   5   1
5   6   7   8      ==> 14   10  6   2
9   10  11  12         15   11  7   3  
13  14  15  16         16   12  8   4
*/
//? Better Solution
/*
#include <stdio.h>
int main(){

    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}
                   };
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[j][3-i]=mat[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//? Optimal Solution
/*
#include <stdio.h>
int main(){
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}
                   };
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=3;j>=0;j--){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
