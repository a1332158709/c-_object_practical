#include<iostream>
using namespace std;
class professor {                         //���������
public:
    professor() {}
    professor (int level,int hours)
    {
        if(level==1)
            { regular=8000;}
        if(level==2)
            { regular=7500;}
        salary = regular+50*hours;
    }
    virtual int printf_salary()
    {
       return salary;
    }
protected:
    int regular;
    int hours;
    int salary;
};
class associate_professor:public professor{
public:
    associate_professor(int level,int hours)
    {
        if(level==1)
            { regular=7000;}
        if(level==2)
            { regular=6000;}
        if(level==3)
            { regular=5000;}
        salary = regular+30*hours;
    }
    virtual int printf_salary()
    {
       return salary;
    }
};
class lecturer:public professor
{
    public:
    lecturer(int hours)
    {
        regular = 4500;
        salary = regular+20*hours;
    }
    virtual int printf_salary()
    {
       return salary;
    }
};
 void func( professor & p)
{
    cout<<p.printf_salary()<<endl;
}
int main()
{
    int L1,L2,h1,h2,h;
    cout<<"��������ڵĵȼ�����ʱ����"<<endl;
    cin>>L1>>h1;
    professor p1(L1,h1);
    cout<<"���ڵĹ���Ϊ:";  func(p1);
    cout<<"�����븱���ڵĵȼ�����ʱ����"<<endl;
    cin>>L2>>h2;
    associate_professor p2(L2,h2);
    cout<<"�����ڵĹ���Ϊ:";  func(p2);
    cout<<"�����뽲ʦ�Ŀ�ʱ����:"<<endl;
    cin>>h;
    lecturer p3(h);
    cout<<"��ʦ�Ĺ���Ϊ:";  func(p3);
    return 0;
}






