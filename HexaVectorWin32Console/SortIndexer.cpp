/*
*
* SortIndexer.cpp
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

#include "SortIndexer.h"

void SortIndexer::SetIndex(int arg)
{
    index = arg;
}

int SortIndexer::GetIndex()
{
    return index;
}

void SortIndexer::SetAscendingOrder(bool arg)
{
    ascending = true;
    descending = false;
}

bool SortIndexer::GetAscendingOrder()
{
    return ascending;
}

void SortIndexer::SetDescendingOrder(bool arg)
{
    descending = true;
    ascending = false;
}

bool SortIndexer::GetDescendingOrder()
{
    return descending;
}

SortIndexer::SortIndexer()
{
    index = -1;
    ascending = true;
    descending = false;
}

SortIndexer::~SortIndexer()
{
}