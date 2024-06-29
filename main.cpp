#include <iostream>
using namespace std;

void countSigns(const char* text, int& countDots, int& countComas) {
    countDots = 0;
    countComas = 0;

    while (*text) {
        if (*text == '.') {
            countDots++;
        }
        else if (*text == ',') {
            countComas++;
        }
        ++text;
    }
}

int main() {
    const int size = 1000;
    char text[size];

    cout << "Enter text: ";
    cin.getline(text, size);

    int countDots, countComas;
    countSigns(text, countDots, countComas);

    cout << "Dots: " << countDots << endl;
    cout << "Comas: " << countComas << endl;

    return 0;
}
