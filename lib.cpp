#include <iostream>
using namespace std;

int ris (char a [10] [20] , char b [1] [20]) {

    int contatore=0;
    int c = 0;
    int y = 0;

    for (y = 0; y < 10; y++) {


        while (a[y][c] == b[0][c]) {
            c++;
        }
        if (c >= 20) {
            c = 0;
            contatore++;
            return y+1;
        }
    }
    if (contatore<=0)
    return 0;
}
