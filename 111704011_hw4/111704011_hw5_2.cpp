#include <iostream>

using namespace std;

std::string solution(int a[], int n){
	int temp;
	bool table[n] = {}; 
	
	for(int i = 0;i < n-1; ++i){
		temp = abs(a[i] - a[i+1]);
		table[temp] = true;
		if(temp <= 0 || temp >= n){	
			return "Not jolly";
		}
	}
	
	for(int i = 1;i < n;++i){
		if(!table[i]){
			return "Not jolly";
		}
	}
	return "Jolly";	
}

/*
int main() {
    int n;
    while(cin >> n) {
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout<<solution(a, n)<<endl;
    }
  	return 0;
}
*/
