#pragma once

#include "BCDHexaDecimal.h"
#include "DateBCDHexaDecimal.h"
#include "HexaByte.h"
#include "IHexaDecimal.h"
#include "IntHexaDecimal.h"
#include "RawStrHexaDecimal.h"

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
