#include <iostream>
#include "lib.h"


using namespace std;
char nome [10] [20];
char test_nome  [20];

int main() {

    for (int i = 0; i < 10; i++) {
    cin >> nome[i];
}
    cin>>test_nome;
    ris (nome,test_nome );

    return 0;
}
