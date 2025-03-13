#include <iostream>
#include <string>
using namespace std;
template <typename T>


class Logger {
public:
    void logError(T message) {
        cout << "[ERROR] " << message << endl;
    }

    void logWarning(T message) {
        cout << "[WARNING] " << message << endl;
    }

    void logSuccess(T message) {
        cout << "[SUCCESS] " << message << endl;
    }
};



int main() {
    Logger <string> logger;

    Logger <int> logger2;
    logger.logError("An error occurred while processing the request.");
    logger.logWarning("Disk space is running low.");
    logger.logSuccess("Operation completed successfully.");
    logger2.logSuccess(1);
    return 0;
}


