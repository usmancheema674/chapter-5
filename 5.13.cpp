#include <iostream>
using namespace std;
void printLine(int);

void printLine(int value) {
    for (int i = 0; i < value; i++) {
        cout << "*";
    }
    cout << endl;
}


int main() {
    int counter = 5;
    int value = 0;
    cout << "Program to print bar chart of entered values.\n" << std::endl;
    while (counter > 0) {
        printf("Enter an integer value 1-30 (%d remaining): ", counter);
        cin >> value;
        if (value >= 1 && value <= 30) {
            printLine(value);
            counter--;
        } else {
            cout << "Incorrect value entered." << std::endl;
        }
    }
    return 0;
}
