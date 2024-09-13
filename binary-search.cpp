#include <bits/stdc++.h>
using namespace std;
bool bs(int a[],int n,int x){
    int l=0,r=n-1;
    while(l<=r){
      int m=(l+r)/2;
        if(a[m]==x){
            return true;
        }
        else if(a[m]<x){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Nhap n = ";cin>>n;
    int a[n];
    cout<<endl<<"Nhap mang: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
       int x;
    cout<<"nhap phan tu can tim: ";
    cin>>x;
    if(bs(a,n,x)){
        cout<<"tim thay "<<x;
    }else{
        cout<<"khong tim thay "<<x;
    }
    return 0;
}



