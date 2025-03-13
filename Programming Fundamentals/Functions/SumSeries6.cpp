#include <iostream>
#include <cmath>

int calculateSeriesSum(int n) {
    int sum = 0;
    int term = 0;
    
    for (int i = 1; i <= n; ++i) {
        term = term * 10 + 1;
        sum += term;
    }

    return sum;
}

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int result = calculateSeriesSum(n);

    std::cout << "The sum of the series is: " << result << std::endl;

    return 0;
}
