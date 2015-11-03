#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// readonly prohibe la modificacion del dato

static const int rojo =0, azul=1, amarillo=2, verde=3, dorado=4, mostaza=5, violeta=6;

//static  int rojo =0, azul=1, amarillo=2, verde=3, dorado=4, mostaza=5, violeta=6;

int main()
{
	for(int color=0;color<6;color++)
	{

		if(color == 3)
			cout<<"el color es verde"<<endl;
		else
			cout<<"no es verde"<<endl;
	
	}
	return 0;
}
