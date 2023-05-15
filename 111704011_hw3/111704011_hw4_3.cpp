#include <iostream>

class Time {
    int h, m, s;

   public:
    Time(){}
    void setTime(int a, int b, int c) {
        h = a;
        m = b;
        s = c;
    }

    void printTime() { std::cout << h << ":" << m << ":" << s << std::endl; }

    int getHour() { return h; }

    int getMinute() { return m; }
    int getSecond() { return s; }

    int timeToSeconds() { return (h * 60 + m) * 60 + s; }
};
/*
int main(){
	int h, m, s;
	cin >> h >> m >> s;
	Time t;
  	t.setTime(h, m, s);
	t.printTime();
	cout << t.getHour() << ":" << t.getMinute() << ":" << t.getSecond() << endl;
	cout << "Seconds: " << t.timeToSeconds() << endl;

	return 0;
}
*/