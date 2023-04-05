#include<iostream>
#include<string>
#include<ctime>
#include<iomanip>
using namespace std;
class Date{
public:
    Date(){}
    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void display()
    {
      cout<<setw(2)<<setfill('0')<<month<<"-"<<setw(2)<<setfill('0')<<day<<"-"<<year<<endl;
    }

protected:
    int year;
    int month;
    int day;
};
class ShortE : public Date
{
    public:
    ShortE(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void display()
    {
          cout<<setw(2)<<setfill('0')<<day<<"-"<<setw(2)<<setfill('0')<<month<<"-"<<year<<endl;
    }

};
class MediumDate : public Date
{
public:
    MediumDate(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void display()
    {
        string months[12]={"Jan.","Feb.","Mar.","Apr.","May.","Jun.","Jul.","Aug.","Sep.","Oct.","Nov.","Dec."};
        cout<<months[month-1]<<setw(2)<<setfill('0')<<day<<","<<year<<endl;
    }
};
class LongDate :public Date
{
public:
    LongDate(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
     void display()
    {
        string months[12]={"January",
                            "February",
                            "March",
                            "April",
                            "May",
                            "June",
                            "July",
                            "August",
                            "September",
                            "October",
                            "November",
                            "December"};
        cout<<months[month-1]<<" "<<setw(2)<<setfill('0')<<day<<","<<year<<endl;
    }

};
int main()
{
    tm *t;
    time_t t1=time(0);
    t=localtime(&t1);
    int a = t->tm_year+1900;
    int b = t->tm_mon+1;
    int c = t->tm_mday;
    Date d1(c,b,a);
    ShortE d2(c,b,a);
    MediumDate d3(c,b,a);
    LongDate d4(c,b,a);
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}
