#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0;
    int k=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }    
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

void print(int ans[], int n){
    for(int i=0; i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int arr1[3]={1, 3, 5};
    int arr2[5]={2, 4, 6, 7, 8};

    int arr3[8]={0};

    merge(arr1, 3, arr2 , 5 ,arr3);

    print(arr3, 8);

}