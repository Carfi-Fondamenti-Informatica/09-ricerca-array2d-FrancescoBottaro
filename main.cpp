#include <iostream>
#include "lib.h"


using namespace std;
char nome [10] [20];
char test_nome [1] [20];

int main() {

    for (int i = 0; i < 10; i++) {
    cin >> nome[i];
}
    cin>>test_nome[0];
    
     if (ris (nome,test_nome)==0)
        cout << "non presente";
    else
        cout <<ris (nome,test_nome)+1;
   

    return 0;
}
