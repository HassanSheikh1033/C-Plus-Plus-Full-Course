#include <iostream>
#include <cmath>

// Series is 1 + 1/2^2 + 1/3^3 + .... + 1/n^n .

double calculateSeriesSum(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / pow(i, i);
    }

    return sum;
}

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    double result = calculateSeriesSum(n);

    std::cout << "The sum of the series is: " << result << std::endl;

    return 0;
}
