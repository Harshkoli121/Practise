#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int t1=0;int t2=1;
    int next;
    cin>>n;
    if(n==0||n==1){
        cout<<t1<<" "<<t2;
    }else{
        for(int i=0;i<n;i++){
            next=t1+t2;
            t1=t2;
            t2=next;
            cout<<next<<" ";
        }
    }
}
