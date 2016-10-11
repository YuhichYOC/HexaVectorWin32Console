#pragma once

#include "stdafx.h"

class SortIndexer
{
private:

    int index;

    bool ascending;

    bool descending;

public:

    void SetIndex(int arg);

    int GetIndex();

    void SetAscendingOrder(bool arg);

    bool GetAscendingOrder();

    void SetDescendingOrder(bool arg);

    bool GetDescendingOrder();

    SortIndexer();

    ~SortIndexer();
};
