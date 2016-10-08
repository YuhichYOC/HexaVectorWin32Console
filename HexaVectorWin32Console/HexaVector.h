#pragma once

#include "stdafx.h"

using namespace HexaDecimalWin32;

class HexaVector
{
private:

    vector<IHexaDecimal> * myVector;

public:

    void SetVector(vector<IHexaDecimal> * arg);

    vector<IHexaDecimal> * GetVector();

    void AddVector(IHexaDecimal * arg);

    HexaVector();

    void Dispose();

    ~HexaVector();
};
