#include <iostream>
#include <fstream>
using namespace std;

int del (int x, int y) {
    int v[100], i, c , k, nr = 0;
    while (x > 0) {
        c = x % 10;
        if (c < y) {
             v[k] = c;
             k++;
        }
        x = x / 10;

    }
    for ()
}

int main() {
    ifstream f("Num.in");
    int v[100], i , n, c;
    f >> c;
    f >> n;
    for (i = 0; i < n; i++) {
        f >> v[i];
    }
    for (i = 0; i < n; i++) {
        cout << del(v[i],c);
    }
}
