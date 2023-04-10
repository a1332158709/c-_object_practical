#include <iostream>
const double PI=3.14;
using namespace std;
class Figure                       //�������
{
    public:
        Figure(){};
		virtual double area()  {return 0.0;}
		virtual double volume()  {return 0.0;}
	protected:
		double radius;
};
class Sphere : public Figure           //�������������࣬���м̳з�ʽ
{
    public:
        Sphere(double r){radius=r;}
		virtual double area()  {return 4*PI*radius*radius;}//������ı����
		virtual double volume() { return 4.0/3*PI*radius*radius*radius; } //����������

};
class Column : public Figure           //����Բ���������࣬���м̳з�ʽ
{
    public:
        Column(double r,double high){radius=r;h=high;}
		virtual double area() {return (2*PI*radius*radius)+(PI*radius*h);}  //��Բ����ı����
		virtual double volume() { return PI*radius*h; }     //��Բ��������
	protected:
		double h;
};
void func1(Figure &p)//�β�Ϊ���������
{
	cout<<p.area()<<endl;   //��������
}
void func2(Figure &p)
{
   cout<<p.volume()<<endl;
}
int main()
{
	Sphere c(1.0);
    cout<<"����ı������:"<<endl;
    func1(c);
    cout<<"����������:"<<endl;
    func2(c);
    Column d(1.0,2.0);
    cout<<"Բ����ı������:"<<endl;
    func1(d);
    cout<<"Բ����������:"<<endl;
    func2(d);
	return 0;
}
