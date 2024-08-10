
#include <bits/stdc++.h>
using namespace std;

void countFrequencies(const string &text) {
    map<char, int> frequencyMap;

    for (char ch : text) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            frequencyMap[ch]++;
        }
    }

    cout << "Character frequencies:\n";
    for (const auto &entry : frequencyMap) {
        cout << entry.first << ": " << entry.second << '\n';
    }
}


int main() {
    string paragraph;

    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    countFrequencies(paragraph);

    return 0;
}

