
#include <iostream>
#include <string>
#include <map>

using namespace std;

// translate fx
string toMorseCode(const std::string& text) {
    
    
    // the alphabet map
    map<char, string> morseCodeMap {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
        {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."},
        {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."},
        {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"},
        {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"},
        {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"},
        {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"},
        {'z', "--.."},
        {' ', " "}, // Space for words
        
    };

    string morseText;
    for (char ch : text) {
        if (morseCodeMap.count(ch) > 0) {
            morseText += morseCodeMap[ch] + " ";
        } else {
            morseText += ch; // if symbol ! found then leave it as it is (!,./()<>;'')
        }
    }

    return morseText;
}

int main() {
    cout << "A program for translating text into Morse code.\n";
    cout << "Enter the text to be translated (enter 'exit' to exit):\n";

    string input;
    while (true) {
        getline(cin, input);

        if (input == "exit") {
            break;
        }

        string morseText = toMorseCode(input);
        cout << "Text in Morse code: " << morseText << "\n\n";
    }

   cout << "The program is completed.\n";

    return 0;
}