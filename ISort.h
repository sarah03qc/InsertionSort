#ifndef ISORT

#include "List.h"

#define ISORT 1

class ISort {
    public:
        // sort retorna la lista de enteros ya ordenada
        virtual List<int>* sort(List<int>* pNumberList) = 0;
        virtual string getName() = 0;
        virtual int getComparisions() = 0;
        virtual int getInterchanges() = 0;
};

#endif