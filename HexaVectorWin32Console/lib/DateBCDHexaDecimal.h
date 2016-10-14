#ifdef DATEBCDHEXADECIMAL_EXPORTS
#define DATEBCDHEXADECIMAL_API __declspec(dllexport)
#else
#define DATEBCDHEXADECIMAL_API __declspec(dllimport)
#endif // DATEBCDHEXADECIMAL_EXPORTS

#pragma once

#include "stdafx.h"

#include "IHexaDecimal.h"

namespace HexaDecimalWin32
{
    class DateBCDHexaDecimal : public IHexaDecimal
    {
    private:

        int mySize;

        std::vector<HexaByte> * hexaValue;

        int yyyy;

        std::string * YYYYtoString();

        int mm;

        std::string * MMtoString();

        int dd;

        std::string * DDtoString();

    public:

        ValueType GetType();

        void SetSize(int arg);

        int GetSize();

        void SetHexa(std::vector<HexaByte> * arg);

        std::vector<HexaByte> * GetHexa();

        void SetValue(int arg1yyyy, int arg2mm, int arg3dd);

        std::string * GetBCDStr();

        int GetNumericValue();

        std::string GetRawValue();

        void HexaToValue();

        void ValueToHexa();

        DateBCDHexaDecimal();

        ~DateBCDHexaDecimal();
    };
}

using namespace HexaDecimalWin32;
