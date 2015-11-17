#include <iostream>
#include <time.h>
#define limite 1000000000

using namespace std;

int main() {

    time_t inicio, fin; 
    inicio = time(NULL);
    int rpt = 0;
    for(int i=0; i<limite; ++i)
        rpt += i;
    fin = time(NULL);

    cout<<"para int se demoro: "<<(double)difftime(fin,inicio)<<endl;

    inicio = time(NULL);
    double rpta = 0;
    for(int i=0; i<limite; ++i)
        rpta += i;
    fin = time(NULL);

    cout<<"para double se demoro: "<<(double)difftime(fin,inicio)<<endl;

    return 0;
}

/*
se puede comprobar que las operaciones de suma para los double se demoran mas que los int
*/