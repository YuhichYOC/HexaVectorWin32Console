/*
*
* HexaVector.cpp
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

void HexaVector::Sort()
{
    VectorCompare vComp;
    vComp.SetIndexer(index);
    sort(myVector->begin(), myVector->end(), vComp);
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