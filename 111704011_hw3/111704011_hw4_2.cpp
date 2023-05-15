class Student {
   private:
    int id;
    double score1, score2;

   public:
    Student(int a, double b, double c) : id{a}, score1{b}, score2{c} {}

    int get_id() { return id; }

    double total() { return score1 + score2; }

    double mean() { return (score1 + score2) / 2; }

    bool is_pass() { return ((score1 + score2) / 2 >= 60); }
};
/*
int main() {
  int id;
  double score1, score2;
  cin >> id >> score1 >> score2;
  Student s(id, score1, score2);
  
  int get_id = s.get_id();
  double total = s.total();
  double mean = s.mean();
  bool p = s.is_pass(); // score up to or equal to 60 is true, else false
  
  cout << get_id << endl;
  cout << total << endl;
  cout << mean << endl;
  cout << p << endl;

  return 0;
}
*/
