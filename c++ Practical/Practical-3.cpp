#include <iostream>
using namespace std;

int main(){

int a, b, c, d, e, f, g;

cout << "enter first number:";
cin >> a;

cout << "enter second number:";
cin >> b;

cout << "\n\nArithmetic operator \n";

c=a+b;
cout << "\nA+b: " << c;

d=a-b;
cout << "\nA-B: " << d;

e=a*b;
cout << "\nA*B: " << e;

f=a/b;
cout << "\nA/B " << f;

g=a%b;
cout << "\nA%B: " << g;



cout << "\n\nAssignment operators\n\n";

c = a += b;
cout << "A += B: " << c;

d = a -= b;
cout << "\nA -= B: " << d;

e = a *= b;
cout << "\nA *= B: " << e;

f = a /= b;
cout << "\nA /= B: " << f;

g = a %= b;
cout << "\nA %= B: " << g;

return 0;

}
