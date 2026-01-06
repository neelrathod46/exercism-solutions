#include <string>

namespace log_line {
std::string message(std::string line) {
    int index = line.find(':');
    std::string message = line.substr(index + 2);
    return message;
    // return the message
}

std::string log_level(std::string line) {
    // return the log level
    int index = line.find(']');
    std::string level = line.substr(1, index-1);

    return level;
}

std::string reformat(std::string line) {
    // return the reformatted message
    int index = line.find(':');
    std::string message = line.substr(index + 2);
    std::string level = line.substr(1, index - 2);
    std::string reformattedString = message + " (" + level + ")";
    return reformattedString;
}
}  // namespace log_line
