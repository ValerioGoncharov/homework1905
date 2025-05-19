#include <iostream>
#include "Math.h"
#include <cmath>	


double MyMath::sum(double value1, double value2) { return value1 + value2; }

double MyMath::difference(double value1, double value2) { return value1 - value2; }

double MyMath::multiplication(double value1, double value2) { return value1 * value2; }

double MyMath::division(double value1, double value2) { return value1 / value2; }

double MyMath::power(double base, double exponent) { return pow(base, exponent); }
