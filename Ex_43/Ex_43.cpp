#include <iostream>
#include <fstream>
using namespace std;

int numar(int n, int c1, int c2) {
    int v[100],c, k = 0,nr = 0, i;
    while (n > 0) {
        c = n % 10;
        if (c == c1)
            c = c2;
        v[k] = c;
        n = n / 10;
        k++;
    }
    for (i = k - 1; i > -1; i--) {
        nr = nr * 10 + v[i];
    }
    return nr;

}
int main() {
    ifstream f ("numere.in");
    int v[100], i, n, c1, c2;
    f >> c1;
    f >> c2;
    f >> n;
    for (i = 0; i < n; i++) {
        f >> v[i];
    }
    for (i = 0; i < n; i++) {
        cout << numar(v[i], c1, c2);
    }
}
