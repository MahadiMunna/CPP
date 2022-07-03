#include <iostream>
using namespace std;

int main()
{
     int a = 10, b, c = 20, d, e = 25, f, g = 28, h;

     b = ++a;
     cout << "a = 10 before, now " << a << endl
          << "b = " << b << " pre-increament" << endl;
     d = c++;
     cout << "c = 20 before, now " << c << endl
          << "d = " << d << " post-increament" << endl;
     f = --e;
     cout << "e = 25 before, now " << e << endl
          << "f = " << f << " pre-decreament" << endl;
     h = g--;
     cout << "g = 28 before, now " << g << endl
          << "h = " << h << " post-decreament" << endl;

     int m = 0, n;

     n = ++m;
     cout << n << endl;
     n = m--;
     cout << n << endl;
     n = --m;
     cout << n << endl;
     n = m++;
     cout << n << endl;
     // 1  //1 //-1  /-1
     m = 0;
     m = ++m - m-- + --m + m++;
     cout << m << endl;
}