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

bool HexaVector::SortLess(vector<IHexaDecimal *> * leftSide, vector<IHexaDecimal *> * rightSide)
{
    int iLoopCount = (int)index->size();
    for (int i = 0; i < iLoopCount; i++) {
        IHexaDecimal * l = leftSide->at(index->at(i)->GetIndex());
        IHexaDecimal * r = rightSide->at(index->at(i)->GetIndex());
        if (index->at(i)->GetAscendingOrder()) {
            switch (l->GetType()) {
            case ValueType::BCD:
            case ValueType::BCD_DATE:
            case ValueType::NUM_INT:
                if (l->GetNumericValue() < r->GetNumericValue()) {
                    return true;
                }
                else if (l->GetNumericValue() > r->GetNumericValue()) {
                    return false;
                }
                break;
            default:
                if (l->GetRawValue() < r->GetRawValue()) {
                    return true;
                }
                else if (l->GetRawValue() > r->GetRawValue()) {
                    return false;
                }
                break;
            }
        }
        else {
            switch (l->GetType()) {
            case ValueType::BCD:
            case ValueType::BCD_DATE:
            case ValueType::NUM_INT:
                if (l->GetNumericValue() > r->GetNumericValue()) {
                    return true;
                }
                else if (l->GetNumericValue() < r->GetNumericValue()) {
                    return false;
                }
                break;
            default:
                if (l->GetRawValue() > r->GetRawValue()) {
                    return true;
                }
                else if (l->GetRawValue() < r->GetRawValue()) {
                    return false;
                }
                break;
            }
        }
    }
    return false;
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