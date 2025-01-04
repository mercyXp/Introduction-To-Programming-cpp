#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string str;
    string all_matches;

    // Reading input until EOF
    while (getline(cin, str)) {
        all_matches += str + "\n";  // Appending each line to a single string with line feeds
    }

    // Regular expression for matching the time formats
    regex time_regex(R"((\b(0?[0-9]|1[0-9]|2[0-3]):([0-5][0-9])\b)|(\b([0-9]):([0-5][0-9])\b))");

    //iterator to find all matches
    auto it = sregex_iterator(all_matches.begin(), all_matches.end(), time_regex);
    auto end = sregex_iterator();

    // Output of all matches
    for (; it != end; ++it) {
        cout << it->str() << endl;  // Printing each matched time substring
    }

    return 0;
}