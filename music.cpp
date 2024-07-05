#include <iostream>
#include <Windows.h>
#include "MMSystem.h"
using namespace std;
int main()
{
    PlaySound(TEXT("C:/Users/Lenovo/Documents/Tech Alpha internship/Music Player"), NULL, SND_SYNC);
    system("pause");
    return 0;
}