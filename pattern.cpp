#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int i=0;i<=6;i++){
	    int spaces=6-i;
	    int star=i;
		//for(int j=1;j<=6-i;j++){
		//cout<<" ";}
	    while(spaces--){
	        cout<<" ";
	    }

		//for(intj=1;j<=i;j++){cout<<"*";}
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
