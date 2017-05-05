/*
*
* HexaVectorTest.cpp
*
* Copyright 2016 Yuichi Yoshii
*     ‹gˆä—Yˆê @ ‹gˆäŽY‹Æ  you.65535.kir@gmail.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

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

void HexaVectorTest::HexaVectorTest02()
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

    SortIndexer * s1 = new SortIndexer();
    s1->SetIndex(0);
    s1->SetAscendingOrder(true);

    std::vector<SortIndexer *> * index = new std::vector<SortIndexer *>();
    index->push_back(s1);

    HexaVector * v = new HexaVector();
    v->AddVector(vector1);
    v->AddVector(vector2);
    v->AddVector(vector3);
    v->SetIndex(index);

    v->Sort();

    testSuccess = true;
}

void HexaVectorTest::HexaVectorTest03()
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
    BCDHexaDecimal * b4 = new BCDHexaDecimal();
    b4->SetSize(5);
    b4->SetValue(20160623);
    b4->ValueToHexa();
    BCDHexaDecimal * b5 = new BCDHexaDecimal();
    b5->SetSize(5);
    b5->SetValue(20160521);
    b5->ValueToHexa();
    BCDHexaDecimal * b6 = new BCDHexaDecimal();
    b6->SetSize(5);
    b6->SetValue(20160711);
    b6->ValueToHexa();
    BCDHexaDecimal * b7 = new BCDHexaDecimal();
    b7->SetSize(5);
    b7->SetValue(20160521);
    b7->ValueToHexa();

    RawStrHexaDecimal * r1 = new RawStrHexaDecimal();
    r1->SetSize(8);
    r1->SetValue(new std::string("0x0100000001000005"));
    r1->ValueToHexa();
    RawStrHexaDecimal * r2 = new RawStrHexaDecimal();
    r2->SetSize(8);
    r2->SetValue(new std::string("0x0100000001000002"));
    r2->ValueToHexa();
    RawStrHexaDecimal * r3 = new RawStrHexaDecimal();
    r3->SetSize(8);
    r3->SetValue(new std::string("0x0100000001000000"));
    r3->ValueToHexa();
    RawStrHexaDecimal * r4 = new RawStrHexaDecimal();
    r4->SetSize(8);
    r4->SetValue(new std::string("0x0100000001000003"));
    r4->ValueToHexa();
    RawStrHexaDecimal * r5 = new RawStrHexaDecimal();
    r5->SetSize(8);
    r5->SetValue(new std::string("0x0100000001000003"));
    r5->ValueToHexa();
    RawStrHexaDecimal * r6 = new RawStrHexaDecimal();
    r6->SetSize(8);
    r6->SetValue(new std::string("0x0100000001000005"));
    r6->ValueToHexa();
    RawStrHexaDecimal * r7 = new RawStrHexaDecimal();
    r7->SetSize(8);
    r7->SetValue(new std::string("0x0100000001000003"));
    r7->ValueToHexa();

    IntHexaDecimal * i1 = new IntHexaDecimal();
    i1->SetSize(4);
    i1->SetValue(10);
    i1->ValueToHexa();
    IntHexaDecimal * i2 = new IntHexaDecimal();
    i2->SetSize(4);
    i2->SetValue(20);
    i2->ValueToHexa();
    IntHexaDecimal * i3 = new IntHexaDecimal();
    i3->SetSize(4);
    i3->SetValue(15);
    i3->ValueToHexa();
    IntHexaDecimal * i4 = new IntHexaDecimal();
    i4->SetSize(4);
    i4->SetValue(12);
    i4->ValueToHexa();
    IntHexaDecimal * i5 = new IntHexaDecimal();
    i5->SetSize(4);
    i5->SetValue(18);
    i5->ValueToHexa();
    IntHexaDecimal * i6 = new IntHexaDecimal();
    i6->SetSize(4);
    i6->SetValue(8);
    i6->ValueToHexa();
    IntHexaDecimal * i7 = new IntHexaDecimal();
    i7->SetSize(4);
    i7->SetValue(5);
    i7->ValueToHexa();

    std::vector<IHexaDecimal *> * vector1 = new std::vector<IHexaDecimal *>();
    vector1->push_back(b1);
    vector1->push_back(r1);
    vector1->push_back(i1);
    std::vector<IHexaDecimal *> * vector2 = new std::vector<IHexaDecimal *>();
    vector2->push_back(b2);
    vector2->push_back(r2);
    vector2->push_back(i2);
    std::vector<IHexaDecimal *> * vector3 = new std::vector<IHexaDecimal *>();
    vector3->push_back(b3);
    vector3->push_back(r3);
    vector3->push_back(i3);
    std::vector<IHexaDecimal *> * vector4 = new std::vector<IHexaDecimal *>();
    vector4->push_back(b4);
    vector4->push_back(r4);
    vector4->push_back(i4);
    std::vector<IHexaDecimal *> * vector5 = new std::vector<IHexaDecimal *>();
    vector5->push_back(b5);
    vector5->push_back(r5);
    vector5->push_back(i5);
    std::vector<IHexaDecimal *> * vector6 = new std::vector<IHexaDecimal *>();
    vector6->push_back(b6);
    vector6->push_back(r6);
    vector6->push_back(i6);
    std::vector<IHexaDecimal *> * vector7 = new std::vector<IHexaDecimal *>();
    vector7->push_back(b7);
    vector7->push_back(r7);
    vector7->push_back(i7);

    SortIndexer * s1 = new SortIndexer();
    s1->SetIndex(0);
    s1->SetAscendingOrder(true);
    SortIndexer * s2 = new SortIndexer();
    s2->SetIndex(1);
    s2->SetAscendingOrder(true);
    SortIndexer * s3 = new SortIndexer();
    s3->SetIndex(2);
    s3->SetAscendingOrder(true);

    std::vector<SortIndexer *> * index = new std::vector<SortIndexer *>();
    index->push_back(s1);
    index->push_back(s2);
    index->push_back(s3);

    HexaVector * v = new HexaVector();
    v->AddVector(vector1);
    v->AddVector(vector2);
    v->AddVector(vector3);
    v->AddVector(vector4);
    v->AddVector(vector5);
    v->AddVector(vector6);
    v->AddVector(vector7);
    v->SetIndex(index);

    v->Sort();

    testSuccess = true;
}

HexaVectorTest::HexaVectorTest()
{
}

HexaVectorTest::~HexaVectorTest()
{
}
