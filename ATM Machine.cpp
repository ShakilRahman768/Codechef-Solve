#include <iostream>
using namespace std;

int main() {
	int a,b,c[1000],i,t;
	cin>>t;
	while(t!=0){
	    cin>>a>>b;
	    for(i=0;i<a;i++){
	        cin>>c[i];
	    }
	    for(i=0;i<a;i++){
	        if(b>=c[i]){
	            cout<<"1";
	            b=b-c[i];
	        }
	        else{
	            cout<<"0";
	        }
	    }
	    cout<<"\n";
	    t--;
	}
	return 0;
}
