#include<bits/stdc++.h>
using namespace std;

int checkKeyString(string& str, int n, int i, int key, vector<int>& ans){
    // Check base condition
    if(i>=n){
        return -1;
    }
    // 1 case solve kareyngey
    if(str[i]==key){
        ans.push_back(i);
    }
    // Baki case recurson shambhal leyga
    return checkKeyString(str, n, i+1, key, ans);
}   
int main(){
    string str="Amarjeet";
    int n=str.length();
    int key='e';
    int i=0;
    vector<int> ans;
   checkKeyString(str, n, i, key, ans);
   cout<<"Printing Ans is: "<<endl;
   for(auto val: ans){
    cout<<val<<" ";
   }
   cout<<endl;
   
return 0;
}