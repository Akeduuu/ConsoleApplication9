#pragma once
#include<iostream>
using namespace std;
class Telbook
{
    char* FIO;
    int Homephone;
    int Mobilephone;
    int Workphone;
public:
    Telbook();
    Telbook(char* aFIO, int aHomephone, int aMobilephone, int aWorkphone);
#pragma once 
    class Reservoir
    {
        char name = new char[30];
        long long length;
        long long width;
        long long depth;
    public:
        void Add(char*);
        void Show();
        void Volume();
        void Area();
        void Srav();
        int Getsea();

        Reservoir(const Reservoir& obj);

        Reservoir();
        ~Reservoir;

    };