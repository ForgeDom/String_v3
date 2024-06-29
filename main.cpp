#include <iostream>
using namespace std;

bool compareStrings(char* str1, char* str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return false;
        }
        ++str1;
        ++str2;
    }
    return *str2 == '\0';
}

int countRepeatings(char* text, char* word) {
    int count = 0;
     char* ptr = text;

    while (*ptr) {
        if (compareStrings(ptr, word)) {
            ++count;
        }
        ++ptr;
    }

    return count;
}

int main() {
    char text[] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
    char word[100];
    cout << text << endl << endl;;
    cout << "Enter the word to count: ";
    cin.getline(word, 100);

    int count = countRepeatings(text, word);

    cout << count << endl;

    return 0;
}