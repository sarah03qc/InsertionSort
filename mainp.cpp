#include "List.h"
#include "InsertionSort.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

    List<int>* listaint = new List<int>();

    listaint->add(new int(32));
    listaint->add(new int(5));
    listaint->add(new int(3));
    listaint->add(new int(60));
    listaint->add(new int(58));
    listaint->add(new int(1));

    InsertionSort ordenador;

    List<int>* listasorted = ordenador.sort(listaint);

    for(int i = 0; i < listasorted->getSize(); i++) {
        int *currentint = listasorted->find(i);
        cout << *currentint << endl;
    }

    cout << ordenador.getComparisions() << " comparaciones." << endl;
    cout << ordenador.getInterchanges() << " intercambios." << endl;

   
    cout << ordenador.getName() << endl;

    return 0;
}