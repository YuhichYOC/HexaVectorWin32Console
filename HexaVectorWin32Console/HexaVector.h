#pragma once

#include "stdafx.h"

#include "SortIndexer.h"

using namespace HexaDecimalWin32;

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

    bool SortLess(vector<IHexaDecimal *> * leftSide, vector<IHexaDecimal *> * rightSide);

    HexaVector();

    void Dispose();

    ~HexaVector();
};
