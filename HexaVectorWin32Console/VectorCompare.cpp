#include "stdafx.h"

#include "VectorCompare.h"

void VectorCompare::SetIndexer(vector<SortIndexer *> * arg)
{
    index = arg;
}

bool VectorCompare::operator() (vector<IHexaDecimal *> * leftSide, vector<IHexaDecimal *> * rightSide)
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

VectorCompare::VectorCompare()
{
}

VectorCompare::~VectorCompare()
{
}