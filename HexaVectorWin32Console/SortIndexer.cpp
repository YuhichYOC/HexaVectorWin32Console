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