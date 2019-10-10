#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double v, cem = 0, cinq = 0, vin = 0, dez = 0, cinc = 0, dois = 0;
    double um = 0, mcinq = 0, mvintc = 0, mdez = 0, mcinc = 0;
    cin >> v;
    int div = v / 100;
    double mum = v;
    if (div >= 1) {
        cem = div;
        mum -= 100 * cem;
    }
    div = mum / 50;
    if (div >= 1) {
        cinq = div;
        mum -= 50 * cinq;
    }
    div = mum / 20;
    if (div >= 1) {
        vin = div;
        mum -= 20 * vin;
    }
    div = mum / 10;
    if (div >= 1) {
        dez = div;
        mum -= 10 * dez;
    }
    div = mum / 5;
    if (div >= 1) {
        cinc = div;
        mum -= 5 * cinc;
    }
    div = mum / 2;
    if (div >= 1) {
        dois = div;
        mum -= 2 * dois;
    }
    mum *= 100;
    um = div = mum / 100;
    mum -= um * 100;
    div = mum / 50;
    if (div >= 1) {
        mcinq = div;
        mum -= 50 * mcinq;
    }
    div = mum / 25;
    if (div >= 1) {
        mvintc = div;
        mum -= 25 * mvintc;
    }
    div = mum / 10;
    if (div >= 1) {
        mdez = div;
        mum -= 10 * mdez;
    }
    div = mum / 5;
    if (div >= 1) {
        mcinc = div;
        mum -= 5 * mcinc;
    }
    cout << "NOTAS:\n";
    cout << cem << " nota(s) de R$ 100.00\n";
    cout << cinq << " nota(s) de R$ 50.00\n";
    cout << vin << " nota(s) de R$ 20.00\n";
    cout << dez << " nota(s) de R$ 10.00\n";
    cout << cinc << " nota(s) de R$ 5.00\n";
    cout << dois << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n";
    cout << um << " moeda(s) de R$ 1.00\n";
    cout << mcinq << " moeda(s) de R$ 0.50\n";
    cout << mvintc << " moeda(s) de R$ 0.25\n";
    cout << mdez << " moeda(s) de R$ 0.10\n";
    cout << mcinc << " moeda(s) de R$ 0.05\n";
    cout << mum << " moeda(s) de R$ 0.01\n";

    return 0;
}
