#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <cmath> 
#include <iomanip> 
int fc(int n){
    for(int i=2;i<sqrt(n)+1;i++){
        if(n%i==0)return n/i;
    }
    return 1;
}
int main() {
    int n,m,found=-1;
    vector<int>vc;
    vector<int>v;
    cin>>n>>m;
    int gr,sm;
    if(n>m){
        gr=n;
        sm=m;
    }
    else{
        gr=m;
        sm=n;
    }
    if(gr==sm)cout<<0<<endl;
    else{
        int x=fc(gr);
        if(x==1)found=0;
        vc.push_back(x);
        if(x!=1 && x!=sm){
        while(1){
            x=fc(x);
            vc.push_back(x);
            if(x==sm) {
                found=1;
                break;
            }if(x==1){
                found=0;
                break;
            }
        }
    }
    if(found==0){
        int y=fc(sm);
        v.push_back(y);
        if(y!=1){
            while(1){
                y=fc(y);
                v.push_back(y);
                if(y==1)break;
            }
        }
    }
    if(v.size()==0){
        cout<<vc.size()<<endl;
    }
    else{
        int s1=v.size();
        int s2=vc.size();
        int t=s1+s2-1+2-1;
        cout<<t<<endl;
    }
    // for(int i=0;i<vc.size();i++)cout<<vc[i]<<" ";
    // cout<<endl;
    // for(int j=0;j<v.size();j++)cout<<v[j]<<" ";
    // cout<<endl;
    }
    return 0;
}
