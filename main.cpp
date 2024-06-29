#include <iostream>
using namespace std;

bool isEqual(char* str1, char* str2, int length) {
    for (int i = 0; i < length; ++i) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

void replaceWord(char* text, char* oldWord, char* newWord) {
    char* ptr = text;
    while (*ptr != '\0') {
        bool found = true;
        for (int i = 0; oldWord[i] != '\0'; ++i) {
            if (ptr[i] != oldWord[i]) {
                found = false;
                break;
            }
        }
        int length = 0;
        for (int i = 0; i < newWord[i] != '\0'; ++i) {
            length++;
        }
        if (found) {
            for (int i = 0; newWord[i] != '\0'; ++i) {
                ptr[i] = newWord[i];
            }
            ptr += length;
        }
        else {
            ++ptr;
        }
    }
}

int main() {
    char text[] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. ";
    char oldWord[20];
    char newWord[20];

    cout << text << endl << endl;

    cout << "Enter the word you want to change:" << endl;
    cin.getline(oldWord, 20);

    cout << "Enter a new word:" << endl;
    cin.getline(newWord, 20);
    

    replaceWord(text, oldWord, newWord);

    cout << "New text:" << endl << text << endl;

    return 0;
}
