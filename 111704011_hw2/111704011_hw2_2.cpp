#include <bits/stdc++.h>

using namespace std;

void swap(int*,int*);

int main(){
  	long long a,b,c;
  	cin >> a >> b >> c;
  	int temp;
  	if(a > b){
    	temp = b;
    	b = a;
    	a = temp;
    }
    if(a > c){
    	temp = c;
    	c = a;
    	a = temp;
	}
	if(b > c){
		temp = c;
		c = b;
		b = temp;
	}
	// a < b < c
	
	if(a + b <= c){
		cout << "Invalid";
	}else if(a == b && b==c){
		cout << "Equilateral";
	}else if(a == b || b == c){
		cout << "Isosceles";
	}else{
		cout << "Scalene";
	}
	return 0;  
}