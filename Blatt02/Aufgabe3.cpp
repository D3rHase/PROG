/*
#include <iostream>
#include <cmath>
                            using namespace std vergessen
int main(){
    int n;
    n = 0;
    double a = 0;
    a = pow(2,n);           pow(2,n) = 2^n nicht n^2 korrekt: pow(n,2)
    cout < a << endl;       beim cout < a .... wurde ein "<" vergessen. korrekt cout << a << endl;
    n = n + 1;
    a = pow(n,2);
    cout << a << endl;
    n = n + 1;
    a = pow(n,2);
    cout << a << endl;
    n = n + 1;
    a = pow(n,2);
    cout << a << endl;
}
*/

#include <cstdio>
#include <iostream>
#include <cmath>
#include <ostream>

using namespace std;

int main() {
    int n = 0;
    cout << "Folge a_n = n^2 mit n aus [0, 1, 2, 3]" << endl;
    cout << pow(n++, 2) << endl;
    cout << pow(n++, 2) << endl;
    cout << pow(n++, 2) << endl;
    cout << pow(n++, 2) << endl;
}
