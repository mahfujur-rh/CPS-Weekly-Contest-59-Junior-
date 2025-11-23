#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int i=0;i<=6;i++){
	    int spaces=6-i;
	    int star=i;
	    while(spaces--){
	        cout<<" ";
	    }
	    while(star--){
	        cout<<"*";
	    }
	    cout<<"\n";
	}
}
//==output==
 /*  *
    **
   ***
  ****
 *****
******
*/
