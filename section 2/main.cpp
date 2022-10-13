#include "sin_cos.cpp"

int main()
{
    cout << "------------SIN RESULT-----------" << endl;
    printLine();
    printTest(1);
    printSinResult(-130, 7662);
    printTest(2);
    printSinResult(70, 9395);
    printTest(3);
    printSinResult(210, -4999);
    printTest(4);
    printSinResult(287, -9562);
    printTest(5);
    printSinResult(335, 4225);
    printTest(6);
    printSinResult(260, -9899);
    printTest(7);
    printSinResult(120, 8670);
    printTest(8);
    printSinResult(10, 1746);
    cout << "------------COS RESULT-----------" << endl;
    printLine();
    printTest(9);
    printCosResult(-137, -7432);
    printTest(10);
    printCosResult(-45, 7071);
    printTest(11);
    printCosResult(-20, 9395);
    printTest(12);
    printSinResult(77, 3419);
    printTest(13);
    printCosResult(180, 8000);
    printTest(14);
    printCosResult(257, 2249);
    printTest(15);
    printCosResult(40, -4999);
    printTest(16);
    printCosResult(550, -9849);
    return 0;
}