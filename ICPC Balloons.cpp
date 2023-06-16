#include <iostream>
using namespace std;

int main() {
	int a,b[1000],c,i,j,t;
	cin>>t;
	while(t!=0){
	    cin>>a;
	    for(i=0;i<a;i++){
	        cin>>b[i];
	    }
	    for(j=i;j>0;j--){
	        if(b[j]==1||b[j]==2||b[j]==3||b[j]==4||b[j]==5||b[j]==6||b[j]==7){
	               cout<<j+1<<"\n";
	               break;
	           }
	    }
	    t--;
	}
	return 0;
}
