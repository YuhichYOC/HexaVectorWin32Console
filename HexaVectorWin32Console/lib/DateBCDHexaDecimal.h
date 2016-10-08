#ifdef DATEBCDHEXADECIMAL_EXPORTS
#define DATEBCDHEXADECIMAL_API __declspec(dllexport)
#else
#define DATEBCDHEXADECIMAL_API __declspec(dllimport)
#endif // DATEBCDHEXADECIMAL_EXPORTS

#pragma once

#include "stdafx.h"

#include "HexaByte.h"

namespace HexaDecimalWin32
{
    class DateBCDHexaDecimal
    {
    private:

        ValueType myType;

        int mySize;

        std::vector<HexaByte> * hexaValue;

        int yyyy;

        std::string * YYYYtoString();

        int mm;

        std::string * MMtoString();

        int dd;

        std::string * DDtoString();

    public:

        void SetType(ValueType arg);

        ValueType GetType();

        void SetSize(int arg);

        int GetSize();

        void SetHexa(std::vector<HexaByte> * arg);

        std::vector<HexaByte> * GetHexa();

        void SetValue(int arg1yyyy, int arg2mm, int arg3dd);

        std::string * GetBCDStr();

        void HexaToValue();

        void ValueToHexa();

        DateBCDHexaDecimal();

        ~DateBCDHexaDecimal();
    };
}

using namespace HexaDecimalWin32;
