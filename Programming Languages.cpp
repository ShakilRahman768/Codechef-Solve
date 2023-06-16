#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e,f,t;
	cin>>t;
	while(t!=0){
	    cin>>a>>b>>c>>d>>e>>f;
	    if((a==c && b==d) ||(a==d && b==c)){
	        cout<<"1\n";
	    }
	    else if((a==e && b==f) ||(a==f && b==e)){
	        cout<<"2\n";
	    }
	    else{
	        cout<<"0\n";
	    }
	    t--;
	}
	return 0;
}
