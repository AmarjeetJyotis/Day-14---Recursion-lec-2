#include<iostream>
#include<limits.h>
using namespace std;

void printMaxiVal(int arr[], int n,int i, int& maxi){
    // base condition
    if(i>=n){
        return;
    }
    // 1 case solve kareyngey 
    if(arr[i]>maxi){
        maxi=arr[i];
    }

    // baki rec shambhal leyga
    printMaxiVal(arr, n, i+1, maxi);
}
int main(){
    int arr[]={40, 5, 80, 10, 15, 20, 34};
    int n=7;
    int i=0;
    int maxi=INT_MIN;
    printMaxiVal(arr, n, i, maxi);

    cout<<"Maximum vax`lue is: "<<maxi<<endl;
return 0;
}