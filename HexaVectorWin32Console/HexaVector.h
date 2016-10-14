#pragma once

#include "stdafx.h"

#include "SortIndexer.h"

using namespace HexaDecimalWin32;

class HexaVector
{
private:

    vector<IHexaDecimal *> * myVector;

    vector<SortIndexer *> * index;

    bool disposed;

    void DisposeVector();

    void DisposeIndex();

public:

    void SetVector(vector<IHexaDecimal *> * arg);

    vector<IHexaDecimal *> * GetVector();

    void AddVector(IHexaDecimal * arg);

    void SetIndex(vector<SortIndexer *> * arg);

    vector<SortIndexer *> * GetIndex();

    void AddIndex(SortIndexer * arg);

    bool SortLess(HexaVector * leftSide, HexaVector * rightSide);

    HexaVector();

    void Dispose();

    ~HexaVector();
};