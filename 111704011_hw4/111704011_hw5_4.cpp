#include <iostream>

using namespace std;

string reverseStringRemoveDuplicate(string s){
	string str = "";
	bool map[100000] = {};
	
	for(int i = 0;i < s.size();++i){
		if(!map[s[i]]){
			map[s[i]] = true;
			str = s[i] + str;
		}
	}
	return str;
}
/*
int main(){
    string s;
    while(cin >> s && s != "stop"){
        cout << reverseStringRemoveDuplicate(s) << endl;
    }
}
*/
