#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int x,y,z;
	    cin>>x>>y>>z;
	    int a=0,b=0;
	    while(z>1){
	        if(x%z==0){
	        x--;
	        a++;
	         }
	   if(y%z==0){
	        y--;
	        b++;
	    }
	        z=z-1;
	   
	    }
	    cout<<a<<" "<<b<<"\n";
	}
	return 0;
}
