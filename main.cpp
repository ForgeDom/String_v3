#include <iostream>
using namespace std;

bool signs(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

int countSentences(const char* text) {
    int count = 0;
    bool inSentence = false;

    while (*text) {
        if (*text == '.' || *text == '!' || *text == '?') {
            if (inSentence) {
                ++count;
                inSentence = false;
            }
        }
        else if (!signs(*text)) {
            inSentence = true;
        }
        ++text;
    }
    if (inSentence) {
        ++count;
    }

    return count;
}

int main() {
    const int size = 1000;
    char text[size];
    
    cout << "Enter text: ";
    cin.getline(text, size);

    cout << countSentences(text) << endl;

    return 0;
}
