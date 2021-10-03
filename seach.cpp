#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int a=0;a<x;a++){
        cin>>arr[a];
    }

    int i,j,index=0;
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(arr[i]==arr[j]){
                index = i+1;
                break;
            }
            if(index != 0){
                break;}
        }
        if(index != 0){
            break;}
    }

    if(index == 0){
        cout<<"-1"; }
    else{
        cout<<index; }
return 0;
}
