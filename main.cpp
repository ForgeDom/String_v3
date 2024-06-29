#include <iostream>
using namespace std;

void reverseString(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseSentences(char* str) {
    int length = 0;
    for (int i = 0; i < str[i] != '\0'; ++i) {
        length++;
    }
    char* start = str;
    char* end = str;

    for (int i = 0; i <= length; ++i) {
        if (str[i] == '.' || str[i] == '\0') {
            end = &str[i - 1];

            reverseString(start, end); 

            start = &str[i + 1];
        }
    }

    cout << "Reversed text:" << endl;
    cout << str << endl;
}

int main() {
    const int size = 1000;
    char str[size];

    cout << "Enter text:" << endl;
    cin.getline(str, size);

    reverseSentences(str);

    return 0;
}
