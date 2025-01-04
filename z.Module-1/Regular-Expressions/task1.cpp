#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string str;   
    getline(cin, str);  // Input string
    getline(cin, str);

    regex time_regex(R"((\b([01]?[0-9]|2[0-3]):([0-5][0-9])\b))"); //regex object

    // Iterating through all matches of the regex in the input string
    for (sregex_iterator it(str.begin(), str.end(), time_regex); it != sregex_iterator(); ++it) {
        cout << it->str(); 
    }
    return 0;
}

