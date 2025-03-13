#include <iostream>

int calculateSeriesSum(int n) {
    int sum = 0;
    int partialSum = 0;

    for (int i = 1; i <= n; ++i) {
        partialSum += i;
        sum += partialSum;
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
