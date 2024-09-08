//! Print the name 5 times
/*
#include <stdio.h>
void printname(char *str,int num){
    if(num==0){
        return;
    }
    printf("%s \n",str);
    printname(str,num-1);
}
int main(){
    printname("santosh",5);
    return 0;
}
*/

//! print lineraly from 1 to n
/*
#include <stdio.h>
void printnumber(int num,int n){
    if(n==num+1){
        return;
    }
    printf("%d\n",n);
    printnumber(num,n+1);
}
int main(){
    printnumber(50,1);
    return 0;
}
*/

//! print form n to 1
/*
#include <stdio.h>

void  number(int num){
    if(num==0){
        return;
    }
    printf("%d \n",num);
    number(num-1);
}
int main(){
    number(50);
    return 0;
}
*/

//! Check if the string is palindrome or not
/*
#include <stdio.h>
#include<stdbool.h>
#include <string.h>
bool palindromestr(char*str,int n,int len){
    if(n>=len/2){
        return true;
    }
    if(str[n]!=str[len-n-1]){
        return false;
    }
    return palindromestr(str,n+1,len);
}

int main(){
    char str[]="madsm";
    int len=strlen(str);
    if(palindromestr(str,0,len)){
        printf("The string is palindrome");
    }
    else{
        printf("The string is not a palindrome");
    }
    return 0;
}
*/

//! Print the largest element from the array
/*
#include <stdio.h>
int main(){
    int arr[]={3,2,1,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for (int  i = 0; i < size; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("maximum element is %d\n",max);    
    return 0;
}
*/

//! Find the second largest element

//? Better Approach
/*
#include <stdio.h>
int main(){
    int arr[]={1,4,5,3,7,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=0,secondmax=-1;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=max&&secondmax<arr[i]){
            secondmax=arr[i];
        }
    }
    printf("%d",secondmax);
    return 0;
}
*/

//? Optimal approach
/*
#include <stdio.h>
int main(){
    int arr[]={1,4,5,3,7,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int largest=0,secondlargest;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        if(arr[i]<largest&&arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    printf("Second largest %d",secondlargest);
    return 0;
}
*/

//! Remove the duplicates from  the sorted array
/*
#include <stdio.h>
int main(){
    int arr[]={1,1,2,2,2,3,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=1;
    while (j!=size){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
        j++;
    }
    i++;
    for(i;i<size;i++){
        arr[i]=0;
    }
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

//! Left rotate the array by one place
/*
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0];
    int i=0;
    for(i;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
*/

//! left rotate array by k place
/*
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int k=5;
    int size=sizeof(arr)/sizeof(arr[0]);
    k=k%size;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<size;i++){
        arr[i-k]=arr[i];
    }
    for(int i=size-k;i<size;i++){
        arr[i]=temp[i-(size-k)];
    }
    for(int i=0;i<size;i++){
        printf("%d\t ",arr[i]);
    }
}
*/

//! Move all zero to the end

//? Brute Force
/*
#include <stdio.h>
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int zero=0;
    int temp[size];
    int i,j;
    for(i=0,j=0;i<size;i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    j++;
    while(j!=size){
        temp[j++]=0;
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

//? Two Pionter Approach
/*
#include <stdio.h>
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=-1;
    for(i=0;i<size;i++){
        if(arr[i]=0){
            j=i;
        }
        break;
    }
    for(i=j+1;i<size;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }

    }
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

//! Linear Search
/*
#include <stdio.h>
int main(){
    int arr[]={6,7,8,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            printf("Element at %d",i);
            break;
        }
    }
    return 0;
}
*/

//TODO Find Interection and union of the sorted array

//! Longest subarray with sum k
//? Brute Force
/*
#include <stdio.h>
int maximun(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int arr[]={1,2,3,1,1,1,1,4,2,3};
    int max=0;
    int result=3;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int s=0;
        for(int j=i;j<size;j++){
            s+=arr[j];
            if(s==result){
                max=maximun(max,j-i+1);
            }
        }
    }
    printf("%d",max);
    return 0;
}
*/

//? Optimal Solution
/*
#include <stdio.h>

int max(int a,int b){
    if(a>b){
    return a;
    }
    else{
        return b;
    }
}

int main(){
    int arr[]={1,2,3,1,1,1,1,4,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    int i=0,j=0;
    long int sum=arr[0];
    int maxlen=0;
    while (j<size)
    {
        while (i<=j&&sum>k)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            maxlen=max(maxlen,j-i+1);
        }
        j++;
        if(j < size)sum+=arr[j];
        
    }
    printf("%d",maxlen);
    return 0;
}
*/

//! Finding the missing number from the array
/*
//? Optimal Solution 
#include <stdio.h>
int maximum(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int main(){
    int arr[]={1,2,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0,max=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        max=maximum(max,arr[i]);
    }
    printf("missing %d",((max*(max+1))/2)-sum);
    return 0;
}
*/

//! Maximum Consecutive Ones
/*
#include <stdio.h>
int maximum(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int main(){
    int arr[]={1,1,0,1,1,1,0,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0, max=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            max=maximum(max,count);
            count=0;
        }
    }
    printf("max %d",max);
    return 0;
}
*/

//! Find the number the Apper once and other twice 
//? Using XOR           a^a=0       and 0^a=a
#include <stdio.h>
int main(){
    int arr[]={1,1,2,3,3,4,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int xor=0;
    for(int i=0;i<size;i++){
        xor^=arr[i];
    }
    printf("%d",xor);
    return 0;
}