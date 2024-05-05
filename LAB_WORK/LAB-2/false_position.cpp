//  implementation of Regular Falsi Method for solving equations
//  The function is x^3 - x^2  + 3

#include <bits/stdc++.h>
using namespace std;
#define MAX_ITERATION 1000000


// solve the function equation
double func(double x)
{
    return x * x * x - x * x + 3;
}

void falsePosition(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a; // Initialize result

    for (int i = 0; i < MAX_ITERATION; i++)
    {
        
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));

        // Check if the above found point is root 
        if (func(c) == 0)
            break;

        // Decide the side to repeat the steps
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}


int main()
{
    // Initial values assumed
    double a = -200, b = 300;
    falsePosition(a, b);
    return 0;
}