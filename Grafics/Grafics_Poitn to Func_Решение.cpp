
#include "TXLib.h"

//typedef unsigned long ;ong superlong_t;
typedef double mathFunc_t (double x, double koefX, double smeshenie); //

void DrawGrafic (mathFunc_t* func, double koefX, double smeshenie, COLORREF color);

double Sqr (double x, double koefX, double smeshenie);

double Sinus (double x, double koefX, double smeshenie);

int main()
    {
    txCreateWindow (800, 600);
    txSetColor (TX_LIGHTGRAY, 2);

    txLine (  50, 300, 750, 300);
    txLine ( 400, 550, 400,  50);

    DrawGrafic(&Sinus, 1,  0, TX_LIGHTGREEN);
    DrawGrafic(&Sinus, 2, -5, TX_GREEN);
    DrawGrafic(&Sinus, 3,  0, TX_CYAN);
    DrawGrafic(&Sqr,   1,  0, TX_LIGHTRED);

    return 0;
    }



void DrawGrafic (mathFunc_t* func, double koefX, double smeshenie, COLORREF color)
    {
    txSetColor(color);
    txSetFillColor (color);

    double x = -10;
    while (x<= +10)
        {
        double y = (*func) (x, koefX, smeshenie);

        txCircle (400 - 10 * x, 300-10 * y, 2);

        x += 0.1;
        }
    }

double Sqr (double x, double koefX, double smeshenie)
    {return smeshenie + koefX*x*x;
    }

double Sinus (double x, double koefX, double smeshenie)
    {return smeshenie + sin (koefX * x);
    }


