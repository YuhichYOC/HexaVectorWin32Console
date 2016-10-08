#ifdef IHEXADECIMAL_EXPORTS
#define IHEXADECIMAL_API __declspec(dllexport)
#else
#define IHEXADECIMAL_API __declspec(dllimport)
#endif // IHEXADECIMAL_EXPORTS

#pragma once

#include "stdafx.h"

#include "HexaByte.h"

namespace HexaDecimalWin32
{
    class IHexaDecimal
    {
    public:

        virtual void SetType(ValueType arg) = 0;

        virtual ValueType GetType() = 0;

        virtual void SetSize(int arg) = 0;

        virtual int GetSize() = 0;

        virtual void HexaToValue() = 0;

        virtual void ValueToHexa() = 0;
    };
}