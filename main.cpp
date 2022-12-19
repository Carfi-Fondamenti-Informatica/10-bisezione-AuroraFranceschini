#include <iostream>
#include "cmath"
using namespace std;

float f (float y) {
    float risultato = 0;
    risultato = pow(y,2) * cos(y) +1;
    return risultato;
}

int main() {
    float a = 0, b = 0, x = 0, err = 0;
    do{
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;

    } while (f(a)*f(b) >= 0);

    do {
        x = (a+b)/2;
        if (f(x)==0){
            cout << x << endl;
            cout << f(x) << endl;
            return 0;
        } else {
            if (f(a)*f(b) <0){
                b = x;
            } else {
                a = x;
            }
            err = abs((b-a)/2);
        }
    } while (err >= exp(1) -6 );
    cout << (x*10000)/10000.0 <<endl;
    cout << f(x) << endl;

    return 0;
}
