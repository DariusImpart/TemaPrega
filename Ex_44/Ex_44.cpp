#include <iostream>
#include <fstream>
using namespace std;

ifstream f ("Numere.in");
int n;

int numar(int c1, int c2) {
    int v[100],c, k = 0,nr = 0, i, x;
    cout << n;
    while (n > 0) {
        c = n % 10;
        n = n / 10;
    }
    //for (i = k - 1; i > -1; i--) {
        //cout << v[i];
    //}

}
int main() {

    int v[100], i, nt, c1, c2;
    f >> c1;
    f >> c2;
    f >> nt;
    if (c1 > c2) {
        return 0;
    }
    f>>n;
    for (i = 0; i < nt; i++) {
        f >> v[i];
    }
    //for (i = 0; i < n; i++) {
        //cout << numar(v[i], c1, c2) << " ";
    //}
}
