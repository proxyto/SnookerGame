#include "Players.h"
#include "Board.h"
#include "Menu.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <time.h>
#include "Loading.h"
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

//#include <string.h>
#include <string>
using namespace std;
string printProg(int);

int main()
{
	Loading l;
	l.getProgress();
	Menu m;
	m.game();
	return 0;
}