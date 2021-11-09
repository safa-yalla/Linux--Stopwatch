# Linux--Stopwatch
I took the initial code from Mohammed on Blogger (his profile- https://www.blogger.com/profile/03825130163517832789)
I had to tailor many changes in it to work in Linux.
Since kbhit() works in conio.h header file which is not available in Linux, I used the signal.h header file to quit the stopwatch when the user pressed a certain key
This was for an academic project and can definitely be better on a different platform with more time.
