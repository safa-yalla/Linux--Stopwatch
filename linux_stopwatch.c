#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <termios.h>
void sig_handler(int signum)
{
}

void stopwatch()
{

  int hh = 0, mm = 0, ss = 0, ms = 0, c;
  system("clear");
  printf("\n\t\t\t    STOPWATCH");
  printf("\n\n\n\n\t\t\t%2d  : %02d  : %02d  . %d\n\n", hh, mm, ss, ms);
  printf("\npress '0' to start the stop watch");
  scanf("%d", &c);

  while (c == 0)
  {
    usleep(100000);
    ms++;
    if (ms == 10)
      ss++, ms = 0;
    if (ss == 60)
      mm++, ss = 0;
    if (mm == 60)
      hh++, mm = 0;
    system("clear");
    printf("\n\t\t\t    STOPWATCH");
    printf("\n\n\n\n\t\t\t%d  : %02d  : %02d  . %d\n\n\npress 'Ctrl+\\' to stop/ quit", hh, mm, ss, ms);
    signal(SIGINT, sig_handler);
  }
}
int main(){
    stopwatch();
}