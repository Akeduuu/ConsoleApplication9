#include<iostream>
#include "Reservoir.h"
using namespace std;

void Reservoir::Add(char* name)
{
    strcpy(this->name, name);
    cout << "Vvedite width (m): ";
    cin >> width;
    cout << "Vvedite length (m):";
    cin >> length;
    cout << "Vvedite Maximum depth (m): ";
    cin >> depth;
}

void Reservoir::Show()
{
    cout << "Name: " << name << endl;
    cout << "width (m): " << width << endl;
    cout << "length (m):" << length << endl;
    cout << "depth (m): " << depth << endl;
}

void Reservoir::Volume()
{

    cout << "Volume: " << length * width * depth << " m3" << endl;
}

void Reservoir::Area()
{

    cout << "Area: " << length * width << " m2" << endl;
}

void Reservoir::Srav()
{
    if (length * width * depth < 10000)
    {
        cout << name << " - pool" << endl;
    }
    else
    {
        cout << name << " - sea" << endl;
    }

}

int Reservoir::Getsea()
{
    return length * width * depth;
}

Reservoir::Reservoir(const Reservoir& obj)
{

    strcpy(name, obj.name);

    //name
    //name = "obj.name";
    length = obj.length;
    width = obj.width;
    depth = obj.depth;
}

Reservoir::Reservoir()
{
    strcpy(name, "qwerty");
    length = 1 + rand() % 1000;
    width = 1 + rand() % 50;
    depth = 1 + rand() % 20;
}


Reservoir::~Reservoir()
{
    delete[] name;
    //cout << "del  ";

}