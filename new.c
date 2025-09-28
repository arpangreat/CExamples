#include <graphics.h>
#include <math.h>
#include <stdio.h>

#define Rx (int(x + 0.5));

void dda(int x1, int y1, int x2, int y2) {
  int dx, dy, steps, i;
  float xinr, yinr;
  float x, y;

  dx = (x2 - x1);
  dy = (y2 - y1);

  steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

  xinr = dx / (float)steps;
  yinr = dy / (float)steps;

  x = x1;
  y = y1;

  for (i = 0; i < steps; i++) {
    putpixel(x + 0.5, y + 0.5, GREEN);
    delay(1);
    x = x + xinr;
    y = y + yinr;
  }
}

int main(int argc, char *argv[]) {
  int gd = DETECT, gm;
  initgraph(&gd, &gm, (char *)"");
  int x1, x2, y1, y2;
  int xmax = getmaxx();
  int ymax = getmaxy();

  setbkcolor(BLACK);
  cleardevice();

  x1 = 100;
  x2 = 200;
  y1 = 70;
  y2 = 150;

  dda(x1, y1, x2, y2);
  getch();
  closegraph();
  return EXIT_SUCCESS;
}
