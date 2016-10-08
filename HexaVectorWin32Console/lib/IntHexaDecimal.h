#ifdef INTHEXADECIMAL_EXPORTS
#define INTHEXADECIMAL_API __declspec(dllexport)
#else
#define INTHEXADECIMAL_API __declspec(dllimport)
#endif // INTHEXADECIMAL_EXPORTS

#pragma once

#include "stdafx.h"

#include "HexaByte.h"

namespace HexaDecimalWin32
{
    class IntHexaDecimal
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

        IntHexaDecimal();

        ~IntHexaDecimal();
    };
}

using namespace HexaDecimalWin32;
