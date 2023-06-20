
#include <iostream>
#include <Windows.h>
#include "App.h"
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    App App;
    App.Exemplo();
    App.Executar();

    return 0;
}
