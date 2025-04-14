// Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void set(int& i)
{
    i = 123;
}

//void swap(int &i1, int &i2)
//{
//    int temp = i1;
//    i1 = i2;
//    i2 = temp;
//}

void swap(int* i1, int* i2)
{
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}

int main()
{
    int i1 = 10;
    int i2 = 20;
    
    int& r = i1;
    r = 40;

    int* p = nullptr;
    p = &i1;

    set(i1);
    swap(i1, i2);
    cout << i1 << endl;
    cout << i2 << endl;
    cout << &i1 << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    cout << &r << endl;

    const char* str = "neumont";

    //int numbers[4];
    //
    //int i;
    //cin >> i;
    //cout << numbers[i] << endl;
    //cout << numbers << endl;

    ////int* nums = new int[4];
    //int j;
    //cin >> j;
    //int* nums = new int[j];
    //cout << nums[j] << endl;

    //int* p1 = new int(8);
    //cout << *p1;

    //delete p1;
    //delete p1;
    //cout << *p1;

    string veggies[] = {"carrot", "celery", "onion", "tomato?"};

    cout << "--------------------------------------------" << endl;
    int size = sizeof(veggies) / sizeof(veggies[0]);
    cout << veggies->size() << endl;
    cout << sizeof(veggies) << endl;
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << veggies[i] << endl;
    }

    for (string veggie : veggies)
    {
        cout << veggie << endl;
    }



    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
