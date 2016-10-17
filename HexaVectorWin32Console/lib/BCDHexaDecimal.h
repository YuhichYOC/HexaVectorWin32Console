#ifdef BCDHEXADECIMAL_EXPORTS
#define BCDHEXADECIMAL_API __declspec(dllexport)
#else
#define BCDHEXADECIMAL_API __declspec(dllimport)
#endif // BCDHEXADECIMAL_EXPORTS

#pragma once

#include "stdafx.h"

#include "IHexaDecimal.h"

namespace HexaDecimalWin32
{
    class BCDHexaDecimal : public IHexaDecimal
    {
    private:

        ValueType myType;

        int mySize;

        std::vector<HexaByte> * hexaValue;

        int myValue;

    public:

        void SetType(ValueType arg);

        ValueType GetType();

        void SetSize(int arg);

        int GetSize();

        void SetHexa(std::vector<HexaByte> * arg);

        std::vector<HexaByte> * GetHexa();

        void SetValue(int arg);

        int GetValue();

        void HexaToValue();

        void ValueToHexa();

        BCDHexaDecimal();

        ~BCDHexaDecimal();
    };
}

using namespace HexaDecimalWin32;
