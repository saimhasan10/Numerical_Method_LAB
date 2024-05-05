// find the root of the function:  x^3 - x^2  + 3 using bisection method

#include<bits/stdc++.h>
using namespace std;
// define a minimum value
# define EPSILON 0.01

// solve the equation
double func(double x)
{
    return x * x * x - x * x + 3;
}

// bisection functionality
void bisection(double a, double b)
{
    // check assumption condition
    if (func(a) * func(b) >= 0)
    {
        cout<< " Wrong assumption for a and b "<< endl;
        return;
    }

    // initially assign a value
    double c = a;

    // iteration
    while((b-a) >= EPSILON )
    {
        // middle point
        c = (a + b) /2;

        // check if the middle point is the root 
        if(func(c) == 0.0)
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
    bisection(a, b);
    return 0;
}