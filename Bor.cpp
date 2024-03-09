#include <iostream>

using namespace std;

int silniafor()
{
    int a;
    int w=1;
    
    cout << "Podaj liczbe z ktorej chcesz obliczyc silnie."<<endl;
    cout << ">> ";
    cin >> a;
    
    cout << "Petla FOR:"<<endl;
    for(int i=1;i<=a;i++)
    {
        w = w*i;
    }
    cout << w;
}

int silniawhile()
{
    int a;
    int w=1;
    int i=1;
    cout << "Podaj liczbe z ktorej chcesz obliczyc silnie."<<endl;
    cout << ">> ";
    cin >> a;

    
    cout << "Petla WHILE:"<<endl;
    
    while(i<=a)
    {
        w = w*i;
        i++;
    }
    cout << w;
}

int silniadowhile()
{
    int a;
    cout << "Podaj liczbe z ktorej chcesz obliczyc silnie."<<endl;
    cout << ">> ";
    cin >> a;
    
    int w=1;
    int i=1;
    
    cout << "Petla DO WHILE:"<<endl;
    
    do
    {
        w = w*i;
        i++;
    } while(i<=a);
    
    cout << w<<endl;
}

int main()
{    
    int p;
    cout << "Wybierz petle ktora chcesz liczyc."<<endl;
    cout << "1. FOR"<<endl;
    cout << "2. WHILE"<<endl;
    cout << "3. DO WHILE"<<endl;
    cout << ">> ";
    cin >> p;
    
    if(p == 1)
    {
    silniafor();    
    }
    else if(p == 2)
    {
        silniawhile();
    }
    else if(p == 3)
    {
        silniadowhile();
    }
}