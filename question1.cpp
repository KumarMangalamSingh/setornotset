#include<iostream>
using namespace std;
int set(int n,int k){
    int d;
    d=n&(1<<k-1);
    return d;
 }

    int main(){
        int n,k,e;
        cin>>n;
        cin>>k;
       e=set(n,k);
       if(e!=0){
        cout<<"set";
       }
       else{
        cout<<"Not set";
       }
        return 0;
    }
