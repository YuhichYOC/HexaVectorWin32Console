#include "stdafx.h"

#include "HexaVectorTest.h"

bool HexaVectorTest::GetTestSuccess()
{
    return testSuccess;
}

void HexaVectorTest::HexaVectorTest01()
{
    testSuccess = false;

    BCDHexaDecimal * b1 = new BCDHexaDecimal();
    b1->SetSize(5);
    b1->SetValue(20160623);
    b1->ValueToHexa();
    BCDHexaDecimal * b2 = new BCDHexaDecimal();
    b2->SetSize(5);
    b2->SetValue(20160701);
    b2->ValueToHexa();
    BCDHexaDecimal * b3 = new BCDHexaDecimal();
    b3->SetSize(5);
    b3->SetValue(20160501);
    b3->ValueToHexa();

    RawStrHexaDecimal * r1 = new RawStrHexaDecimal();
    r1->SetSize(8);
    r1->SetValue(new std::string("0x0100000001000001"));
    r1->ValueToHexa();
    RawStrHexaDecimal * r2 = new RawStrHexaDecimal();
    r2->SetSize(8);
    r2->SetValue(new std::string("0x0100000001000002"));
    r2->ValueToHexa();
    RawStrHexaDecimal * r3 = new RawStrHexaDecimal();
    r3->SetSize(8);
    r3->SetValue(new std::string("0x0100000001000000"));
    r3->ValueToHexa();

    std::vector<IHexaDecimal *> * vector1 = new std::vector<IHexaDecimal *>();
    vector1->push_back(b1);
    vector1->push_back(r1);
    std::vector<IHexaDecimal *> * vector2 = new std::vector<IHexaDecimal *>();
    vector2->push_back(b2);
    vector2->push_back(r2);
    std::vector<IHexaDecimal *> * vector3 = new std::vector<IHexaDecimal *>();
    vector3->push_back(b3);
    vector3->push_back(r3);

    HexaVector * v = new HexaVector();
    v->AddVector(vector1);
    v->AddVector(vector2);
    v->AddVector(vector3);

    testSuccess = true;
}

HexaVectorTest::HexaVectorTest()
{
}

HexaVectorTest::~HexaVectorTest()
{
}
