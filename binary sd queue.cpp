#include <bits/stdc++.h>
using namespace std;
void init(int n,vector<string> &x){
    queue<string> q;
    q.push("1");
    x.push_back("1");
    while(1){
        string top=q.front();
        q.pop();
        x.push_back(top+"0");
        if(x.size()==n)
            break;
        q.push(top+"0");
        x.push_back(top+"1");
        if(x.size()==n)
            break;
        q.push(top+"1");
    }
}
int main(){
    int n;
    cout<<"Nhap n = ";cin>>n;
    vector<string> v;
    init(n,v);
    for(string x:v)
        cout<<x<<" ";
    return 0;
}



