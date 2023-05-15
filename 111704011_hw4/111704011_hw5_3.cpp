using namespace std;
char normalize(char c){
	if(c >= 'a' && c <= 'z'){
		return c;
	}
	return c-'A'+'a';
}

string solution(string s){
	string str = "";
	for(int i = 0;i < s.size();++i){
		if(i%2){
			str += normalize(s[i]);	
		}else{
			str += normalize(s[i]) - 'a' + 'A';
		}
	}
	return str;
}
/*
int main() {
    string s;
    while (cin >> s) {
        if (s == "stop") break;
        cout << solution(s) << endl;
    }
    return 0;
}
*/
