#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b,c,d;
  	cin >> a>>b>>c>>d;
  	a = a*60+b;
  c = c*60 +d;
  if(a > c){
  	cout << 24*60 -a +c;
  }else{
  	cout << c-a;
  }
 	return 0; 
}