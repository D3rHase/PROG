#include <cmath>
#include <cstdio>

int main() {
    
    long double bruch = 64.0 / 128;
    long double bruch1Drittel = 1.0/3;
    long double bruch2PiDurch5 = M_PIl/5;
    long double cosPiHalbe = cosl(M_PIl / 2);
    long double exp = powl(M_El, powl(5.84, -12));
    long double ln = logl(powl(M_El, 1.1));

    printf("%15s = %13.10Lf  = %23.20Lf\n", "64/128", bruch, bruch);
    printf("%15s = %13.10Lf  = %23.20Lf\n", "1/3", bruch1Drittel, bruch1Drittel);
    printf("%15s = %13.10Lf  = %23.20Lf\n", "2*PI/5", bruch2PiDurch5, bruch2PiDurch5);
    printf("%15s = %13.10Lf  = %23.20Lf\n", "cos(PI/2)", cosPiHalbe, cosPiHalbe);
    printf("%15s = %13.10Lf  = %23.20Lf\n", "exp(5.84^(-12))", exp, exp);
    printf("%15s = %13.10Lf  = %23.20Lf\n", "ln(exp(1.1))", ln, ln);
    
}
