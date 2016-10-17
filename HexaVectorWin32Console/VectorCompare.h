#pragma once

#include "SortIndexer.h"

class VectorCompare
{
private:

    vector<SortIndexer *> * index;

public:

    void SetIndexer(vector<SortIndexer *> * arg);

    bool operator() (vector<IHexaDecimal *> * leftSide, vector<IHexaDecimal *> * rightSide);

    VectorCompare();

    ~VectorCompare();
};
