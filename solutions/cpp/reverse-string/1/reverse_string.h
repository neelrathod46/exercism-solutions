#pragma once
#include <string>

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string s) {
    std::string reverse{};
    int n{static_cast<int>(s.size())};
    for (int i{n-1}; i >= 0; --i) {
        reverse += s[i];
    }

    return reverse;
}

}  // namespace reverse_string
