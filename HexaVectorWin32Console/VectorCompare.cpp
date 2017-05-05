/*
*
* VectorCompare.cpp
*
* Copyright 2016 Yuichi Yoshii
*     ‹gˆä—Yˆê @ ‹gˆäŽY‹Æ  you.65535.kir@gmail.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

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