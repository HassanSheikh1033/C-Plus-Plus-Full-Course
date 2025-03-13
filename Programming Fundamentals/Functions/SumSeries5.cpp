#include <iostream>
#include <cmath>

double calculateSeriesSum(int n, double x) {
    double sum = x; // Initialize with the first term (n = 1)

    for (int i = 1; i <= n; ++i) {
        int exponent = 2 * i + 1;
        int factorial = 1;

        // Calculate factorial
        for (int j = 1; j <= exponent; ++j) {
            factorial *= j;
        }

        // Calculate term and add to the sum
        double term = pow(-1, i) * pow(x, exponent) / factorial;
        sum += term;
    }

    return sum;
}

int main() {
    int n;
    double x;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    double result = calculateSeriesSum(n, x);

    std::cout << "The sum of the series is: " << result << std::endl;

    return 0;
}
