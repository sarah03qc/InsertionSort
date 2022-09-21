#include "List.h"
#include "InsertionSort.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

    List<int>* listaint = new List<int>();

    listaint->add(new int(66));
    listaint->add(new int(3));
    listaint->add(new int(52));
    listaint->add(new int(1));
    listaint->add(new int(25));

    InsertionSort ordenador;

    List<int>* listasorted = ordenador.sort(listaint);

    for(int i = 0; i < listasorted->getSize(); i++) {
        int *currentint = listasorted->find(i);
        cout << *currentint << endl;
    }
  
    return 0;
}