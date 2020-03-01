
#include "TXLib.h"
const int SIN = 1,
          SQR = 2;
          COS = 3;

void DrawGrafic(int func, COLORREF color);
double Sqr (double x);

int main()
    {
    txCreateWindow (800, 600);
    DrawGrafic(SIN, TX_LIGHTGREEN);
    DrawGrafic(SQR, TX_LIGHTRED);
    DrawGrafic(COS, TX_LIGHTBLUE);

    return 0;
    }

void DrawGrafic(int func, COLORREF color)
    {
    txSetColor(color);
    txSetFillColor (color);

    double x = -10;
    while (x<= +10)
        {
        double y;
        switch (func)
            {
            case SIN: y=sin(x); break;
            case SQR: y=Sqr(x); break;
            case COS: y=cos(x); break;

            default: printf ("ERROR: DrawGrafic(): Invalid func= %d\n", func);
                     return;
            }

        txCircle (400 - 10 * x, 300-10 * y, 2);
        x += 0.1;

        }
    }

double Sqr (double x)  {return x*x;}


