
#include "TXLib.h"

void DrawGrafic(int func, COLORREF color);
double Sqr (double x);

int main()
    {
    txCreateWindow (800, 600);
    DrawGrafic(sin, TX_LIGHTGREEN);
    DrawGrafic(Sqr, TX_LIGHTRED);

    return 0;
    }

void DrawGrafic(??? func ???, COLORREF color)
    {
    txSetColor(color);
    txSetFillColor (color);

    double x = -10;
    while (x<= +10)
        {
        gouble y = func (x);

        txCircle (400 - 10 * x, 300-10 * y, 2);

        x += 0.1;
        }
    }

double Sqr (double x)  {return x*x;}


