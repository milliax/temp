#include <bits/stdc++.h>

using namespace std;

int main(){
  	int a,b;
  cin >> a >> b;
  	int temp; 
  	if(a >b ){
    	temp = a;
      a = b;
      b = temp;
    }
  
  	temp = b-a;
	if(temp > 100-b+a){
    	temp = 100 -b +a;
    }
  cout << temp;
 	return 0; 
}