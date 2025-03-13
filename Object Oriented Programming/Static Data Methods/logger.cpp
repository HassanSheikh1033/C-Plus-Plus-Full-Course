#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>

class Logger {
private:
    // Mutex to ensure thread safety
    static std::mutex mtx;

    // Static member variable for the log file stream
    static std::ofstream logFile;

public:
    // Static function to write a message to the log file with a timestamp
    static void logMessage(string message) {
        lock_guard<mutex> lock(mtx);

        // Get the current time
        time_t currentTime = :time(nullptr);
        char buffer[80];
        std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));

        // Prepare the log message with timestamp
        std::stringstream ss;
        ss << buffer << " - " << message << std::endl;

        // Append the message to the log file
        logFile << ss.str();
    }
};



// Initialize the static log file stream
std::ofstream Logger::logFile("application.log");



// Initialize the static mutex
std::mutex Logger::mtx;


int main() {
    // Example usage
    Logger::logMessage("Application started.");
    Logger::logMessage("An error occurred.");

    return 0;
}



