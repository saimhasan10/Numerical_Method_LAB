#include <bits/stdc++.h>
using namespace std;

// The function is x^2 - 4x  - 10
double func(double x)
{
    return x * x - 4 * x - 10;
}

// Print root of func(x)
void bisection(double x1, double x2)
{
    if (func(x1) * func(x2) >= 0)
    {
        cout << "Your assumed 'a' and 'b' are not correct.\n";
        return;
    }

    double x0 = 0;
    for (int i = 1; i <= 4; i++)
    {
        // Find middle point
        x0 = (x1 + x2) / 2;
        cout << "Iteration no. " << i << " : " << x0 << endl;

        if (func(x1) * func(x0) < 0)
            x2 = x0;
        else
            x1 = x0;
    }
}

int main()
{
    // Initial values assumed
    double x1 = -2, x2 = -1;
    bisection(x1, x2);
    return 0;
}