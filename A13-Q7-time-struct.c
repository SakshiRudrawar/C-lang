#include <stdio.h>
#include <string.h>

struct Time
{
    int hour;
    int min;
    int sec;

    void display()
    {
        printf("%d:%d:%d", this->hour, this->min, this->sec);
    }

    void sethour(int h)
    {
        this->hour = h;
    }

    void setmin(int m)
    {
        this->min = m;
    }

    void setsec(int s)
    {
        this->sec = s;
    }

    // get

    int gethour()
    {
        return this->hour;
    }

    int getmin()
    {
        return this->min;
    }

    int getsec()
    {
        return this->sec;
    }
};

int main()
{
    int h, m, s;
    Time t;

    printf("Enter the hour: ");
    scanf("%d", &h);

    printf("Enter the min: ");
    scanf("%d", &m);

    printf("Enter the sec: ");
    scanf("%d", &s);

    t.sethour(h);
    t.setmin(m);
    t.setsec(s);

    printf("Time: ");
    t.display();

    return 0;
}

