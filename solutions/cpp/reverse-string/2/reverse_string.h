#pragma once
#include <string>

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string s) {
    std::string reverse{};
    for (int i{0}; i < static_cast<int>(s.size()); ++i) {
        reverse = s[i] + reverse;
    }

    return reverse;
}

}  // namespace reverse_string
