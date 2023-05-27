#include<iostream>
using namespace std;

int abs(int);

int main(){
  	int x1, x2, y1, y2;
  
  	while (cin >> x1 >> y1 >> x2 >> y2)
	{
		if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0)
			break;
      	
      if(x1 == x2 && y1 == y2){
      	cout << 0 << endl;
      }else if(x1 == x2 || y1 == y2){
       	cout << 1 <<endl; 
      }else if(abs(y2-y1)  == abs(x2-x1)){
        cout << 1 <<endl;
      }else {
        cout << 2 <<endl;
      }
    }
	return 0;
}

int abs(int a){
 	if(a > 0){
    	return a;
    }
  return a*(-1);
}