#include <bits/stdc++.h>
using namespace std;
void printKMax(int arr[],int n, int k){
    deque<int> q;
    for(int i=0;i<n;i++){
        if(q.empty()){
            q.push_back(i);
        }
        if(q.front()<=(i-k)){
            q.pop_front();
        }
        while(!q.empty() && arr[q.back()<=arr[i]]){
            q.pop_back();
        }
        q.push_back(i);
        if(i>=(k-1))
            cout<<arr[q.front()]<<" ";
    }
}
int main(){
        int t;
       cout<<"nhap so test: ";
        cin >> t;
        while(t>0) {
            int n,k;
            cin >> n >> k;
            int i;
            int arr[n];
            cout<<"nhap mang"<<endl;
            for(i=0;i<n;i++)
                cin >> arr[i];
            cout<<"result:"<<endl;
            printKMax(arr, n, k);
            cout<<endl;
            t--;
        }
    return 0;
}



