//2d Translation

#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int xo=2*100,yo=4*100,xn,yn,tx=55,ty=15;
    xn = xo+tx;
    yn = yo+ty;
    setcolor(WHITE);
    outtextxy(xo,yo,"Original Circle");
    circle(xo,yo,50);
    setcolor(YELLOW);
    outtextxy(xn+5,yn+5,"Translated Circle");
    circle(xn,yn,50);

    getch();
    closegraph();
    return 0;
}
//Shearing 

#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int  main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int x1 = 100, y1 = 100; // A (1, 1)
    int x2 = 50,  y2 = 50;   // B (0, 0)
    int x3 = 100, y3 = 50;  // C (1, 0)
    
    int shx = 2 , shy = 2 ;
    //original triangle
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    //outtextxy(x1 - 40, y1 - 10, "Original Triangle");
    // x axis shearing
    line((x1+(shx*y1)), y1, (x2+(shx*y2)), y2);
    line((x2+(shx*y2)), y2, (x3+(shx*y3)), y3);
    line((x3+(shx*y3)), y3, (x1+(shx*y1)), y1);
    //outtextxy(x1 - 40, y1 - 10, "Original Triangle");

   //shearing Y axis
    line(x1,(y1+(shy*x1)), x2,(y2+(shy*x2)));
    line(x2,(y2+(shy*x2)), x3,(y3+(shy*x3)));
    line(x3,(y3+(shy*x3)), x1,(y1+(shy*x1)));

    getch();
    closegraph();
}
