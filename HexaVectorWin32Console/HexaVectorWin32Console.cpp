// HexaVectorWin32Console.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

#include "HexaVectorTest.h"

void HexaVectorTest01()
{
    HexaVectorTest * hTest = new HexaVectorTest();
    hTest->HexaVectorTest01();
    if (hTest->GetTestSuccess()) {
        cout << "hTest test 01 success." << "\n";
    }
    else {
        cout << "hTest test 01 failed." << "\n";
    }
    delete hTest;
}

int main()
{
    HexaVectorTest01();

    return 0;
}