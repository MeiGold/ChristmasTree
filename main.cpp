#include <iostream>

using namespace std;

int main() {
    cout << "Input the length of Christmas tree:";
    int length;
    cin >> length;

    for (int i = 0, k = 1; i < length; ++i, ++k) {
        for (int j = 0; j < length * 2; ++j) {
            j >= length - k && j < length + k ? !(k & 1) && (j & 1) ? cout << '*' : (k & 1) && !(j & 1) ? cout
                    << '*' : cout << ' ' : cout << ' ';
        }
        cout << endl;
    }

    cout << "Happy new year!";

    return 1488;
}
