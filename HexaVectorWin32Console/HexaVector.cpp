#include "stdafx.h"

#include "HexaVector.h"

void HexaVector::DisposeVector()
{
    int iLoopCount = (int)myVector->size();
    for (int i = 0; i < iLoopCount; i++) {
        int jLoopCount = (int)myVector->at(i)->size();
        for (int j = 0; j < jLoopCount; j++) {
            delete myVector->at(i)->at(j);
        }
        delete myVector->at(i);
    }
    delete myVector;
}

void HexaVector::DisposeIndex()
{
    int iLoopCount = (int)index->size();
    for (int i = 0; i < iLoopCount; i++) {
        delete index->at(i);
    }
    delete index;
}

void HexaVector::SetVector(vector<vector<IHexaDecimal *> *> * arg)
{
    myVector = arg;
}

vector<vector<IHexaDecimal *> *> * HexaVector::GetVector()
{
    return myVector;
}

void HexaVector::AddVector(vector<IHexaDecimal *> * arg)
{
    myVector->push_back(arg);
}

void HexaVector::SetIndex(vector<SortIndexer *> * arg)
{
    index = arg;
}

vector<SortIndexer *> * HexaVector::GetIndex()
{
    return index;
}

void HexaVector::AddIndex(SortIndexer * arg)
{
    index->push_back(arg);
}

HexaVector::HexaVector()
{
    myVector = new vector<vector<IHexaDecimal *> *>();
    index = new vector<SortIndexer *>();
    disposed = false;
}

void HexaVector::Dispose()
{
    DisposeVector();
    DisposeIndex();
    disposed = true;
}

HexaVector::~HexaVector()
{
    if (!disposed) {
        Dispose();
    }
}