#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double a, b, c, d, ans, exam;
    cin >> a >> b >> c >> d;
    ans = (a * 2 + b * 3 + 4 * c + d) / 10;
    cout << "Media: " << fixed << setprecision(1) << ans << "\n";
    if (ans >= 7)
        cout << "Aluno aprovado.\n";
    else if (ans < 5)
        cout << "Aluno reprovado.\n";
    else {
        cout << "Aluno em exame.\n";
        cin >> exam;
        cout << "Nota do exame: " << fixed << setprecision(1) << exam << "\n";
        exam = (ans + exam) / 2;
        if (exam >= 5)
            cout << "Aluno aprovado.\n";
        else
            cout << "Aluno reprovado.\n";
        cout << "Media final: " << fixed << setprecision(1) << exam << "\n";
    }

    return 0;
}
