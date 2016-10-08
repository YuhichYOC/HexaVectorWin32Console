#ifdef RAWSTRHEXADECIMAL_EXPORTS
#define RAWSTRHEXADECIMAL_API __declspec(dllexport)
#else
#define RAWSTRHEXADECIMAL_API __declspec(dllimport)
#endif // RAWSTRHEXADECIMAL_EXPORTS

#pragma once

#include "stdafx.h"

#include "HexaByte.h"

namespace HexaDecimalWin32
{
    class RawStrHexaDecimal
    {
    private:

        ValueType myType;

        int mySize;

        std::vector<HexaByte> * hexaValue;

        std::string * myValue;

    public:

        void SetType(ValueType arg);

        ValueType GetType();

        void SetSize(int arg);

        int GetSize();

        void SetHexa(std::vector<HexaByte> * arg);

        std::vector<HexaByte> * GetHexa();

        void SetValue(std::string * arg);

        std::string * GetValue();

        void HexaToValue();

        void ValueToHexa();

        RawStrHexaDecimal();

        ~RawStrHexaDecimal();
    };
}

using namespace HexaDecimalWin32;
