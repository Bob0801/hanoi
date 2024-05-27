#include <iostream>

using namespace std;

int step = 0;

void tower(int n, char a, char b, char c) {
    if (n == 1) {
        cout << a << "-->" << c << endl;
        step++;
    } else {
        tower(n - 1, a, c, b);
        cout << a << "-->" << c << endl;
        step++;
        tower(n - 1, b, a, c);
    }
}

int main() {
    int n;
    cout << "請輸入層數:";
    cin >> n;
    tower(n, 'A', 'B', 'C');
    cout << "共" << step << "步" << endl;
}
