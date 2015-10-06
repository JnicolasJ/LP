#include <iostream>
//#include <chrono>
#include <time.h>



using namespace std;

void func1()
{
    int static my_array[1000];
    for(int i =0; i<1000; i++)
        my_array[i]=i;
}

void func2()
{
    int my_array[1000];
    for(int i =0; i<1000; i++)
        my_array[i]=i;

}

void func3()
{
    int* my_array;
    my_array = new int [1000];
    for(int i =0; i<1000; i++)
        my_array[i]=i;
    delete []my_array;
}

int main()
{
    clock_t start = clock();
    for(int i =0; i<100000; ++i)
    {
        func1();
    }
    cout<<"tiempo fun1: "<< ((double)clock() - start) / CLOCKS_PER_SEC<<endl;

    clock_t start2 = clock();
    for(int i =0; i<100000; ++i)
    {
        func2();
    }
    cout<<"tiempo fun1: "<< ((double)clock() - start2) / CLOCKS_PER_SEC<<endl;

    clock_t start3 = clock();
    for(int i =0; i<100000; ++i)
    {
        func3();
    }
    cout<<"tiempo fun1: "<< ((double)clock() - start3) / CLOCKS_PER_SEC;

    return 0;
}
