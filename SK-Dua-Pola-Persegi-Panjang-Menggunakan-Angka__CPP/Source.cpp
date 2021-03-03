#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[]) {
    int count = 0;
    int i, j;
    int rows = 7;
    int temp = rows;
    count = rows / 2 + 1;

    for (i = 0; i < rows; i++) {
        for (j = 1; j <= temp; j++) {
            cout << j;
        }
            
        for (j = 0; j < i; j++) {
            cout << "  ";
        }
            
        for (j = temp; j >= 1; j--) {
            cout << j;
        }
            
        cout << "\n";
        temp--;
    }

    _getch();
    return 0;
}