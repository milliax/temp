class Circle {
   private:
    const double pi = 3.14159;
    double radius;

   public:
    Circle(double r) : radius{r} {}

    double diameter() { return radius * 2; }

    double circumference() { return 2 * pi * radius; }

    double area() { return pi * radius * radius; }
};
/*
int main() {
  int a;
  cin >>a;
  Circle c(a);
  double diameter = c.diameter();
  double circumference = c.circumference();
  double area = c.area();
  
  cout << diameter << endl;
  cout << circumference << endl;
  cout << area << endl;

  return 0;
}
*/
