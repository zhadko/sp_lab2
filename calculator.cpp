#include "calculator.h"

int Calculator::Add (int a, int b)
{
	return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b;
}

int Calculator::Div (double a, double b)
{
    return a / b;
}