#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double a, b, c;
    cin >> a >> b >> c;
    double x = b - c, y = a - c, z = a - b;
    if (x < 0)
        x = -x;
    if (y < 0)
        y = -y;
    if (z < 0)
        z = -z;
    if (!(x < a && a < b + c) && !(y < b && b < a + c) && !(z < c && c < a + b))
        cout << "NAO FORMA TRIANGULO\n";
    else if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == b * b + a * a))
        cout << "TRIANGULO RETANGULO\n";
    else if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > b * b + a * a))
        cout << "TRIANGULO OBTUSANGULO\n";
    else if ((a * a < b * b + c * c) || (b * b < a * a + c * c) || (c * c < a * a + b * b))
        cout << "TRIANGULO ACUTANGULO\n";
    if (a == b && a == c)
        cout << "TRIANGULO EQUILATERO\n";
    else if (a == b || a == c || b == c)
        cout << "TRIANGULO ISOSCELES\n";
    return 0;
}