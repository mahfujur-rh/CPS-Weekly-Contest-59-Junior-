#include <bits/stdc++.h>
using namespace std;
int ara[20001]; //sob smy 0 thekay st hobey...
int main() {
    int n,x;cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>x;
        ara[x]=1;
    }
    for(int i=1;i<=n;i++){  //jetu 0 hobey etu mising num print korbay 
        cout<<ara[i]<<endl;
        if(ara[i]==0){
            cout<<i<<endl;
        }
    }
}
