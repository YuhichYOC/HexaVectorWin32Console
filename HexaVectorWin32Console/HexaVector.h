#pragma once

#include "stdafx.h"

#include <algorithm>

#include "SortIndexer.h"
#include "VectorCompare.h"

class HexaVector
{
private:

    vector<vector<IHexaDecimal *> *> * myVector;

    vector<SortIndexer *> * index;

    bool disposed;

    void DisposeVector();

    void DisposeIndex();

public:

    void SetVector(vector<vector<IHexaDecimal *> *> * arg);

    vector<vector<IHexaDecimal *> *> * GetVector();

    void AddVector(vector<IHexaDecimal *> * arg);

    void SetIndex(vector<SortIndexer *> * arg);

    vector<SortIndexer *> * GetIndex();

    void AddIndex(SortIndexer * arg);

    void Sort();

    HexaVector();

    void Dispose();

    ~HexaVector();
};