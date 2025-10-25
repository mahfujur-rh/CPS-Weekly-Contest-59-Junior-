//https://vjudge.net/problem/CodeChef-MAXCAP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int ms;cin>>ms;
	while(ms--){
	    int x,y;cin>>x>>y;
	    int total=x*y;
	    if(total<=500 && x<=8){
	        cout<<"YES"<<endl;	        
	    }
	   
	    else cout<<"NO"<<endl;
	}
	return 0;

}


