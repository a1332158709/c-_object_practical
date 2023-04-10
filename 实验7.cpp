//����Li5_3.cpp
//��̬����
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
		virtual double volume() { return 3.0/4*PI*radius*radius*radius; } //���������� 
		
};
class Column : public Figure           //����Բ���������࣬���м̳з�ʽ
{                       
    public:                                    
        Column(double r,double high){radius=r;h=high;}
		virtual double area() {return (2*PI*radius*radius)+(PI*r*h);}  //��Բ����ı���� 
		virtual double volume() { return PI*radius*h; }     //��Բ�������� 
	protected:
		double h;
};
void func(Figure &p)//�β�Ϊ���������
{
	cout<<p.area()<<endl;
}
double main()
{
	Figure fig;
    cout<<"Area of  is Figure is ";
    func(fig);
	Circle  c(3.0); // Circle���������
    cout<<"Area of circle is ";
    func(c);
    Rectangle rec(4.0,5.0);// Rectangle���������
	cout<<"Area of rectangle is ";
    func(rec);
	return 0;
}
