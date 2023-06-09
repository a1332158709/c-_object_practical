#include <iostream>
const double PI=3.14;
using namespace std;
class Figure                       //定义基类
{
    public:
        Figure(){};
		virtual double area()  {return 0.0;}
		virtual double volume()  {return 0.0;}
	protected:
		double radius;
};
class Sphere : public Figure           //定义球体派生类，公有继承方式
{
    public:
        Sphere(double r){radius=r;}
		virtual double area()  {return 4*PI*radius*radius;}//求球体的表面积
		virtual double volume() { return 4.0/3*PI*radius*radius*radius; } //求球体的体积

};
class Column : public Figure           //定义圆柱体派生类，公有继承方式
{
    public:
        Column(double r,double high){radius=r;h=high;}
		virtual double area() {return (2*PI*radius*radius)+(PI*radius*h);}  //求圆柱体的表面积
		virtual double volume() { return PI*radius*h; }     //求圆柱体的体积
	protected:
		double h;
};
void func1(Figure &p)//形参为基类的引用
{
	cout<<p.area()<<endl;   //输出表面积
}
void func2(Figure &p)
{
   cout<<p.volume()<<endl;
}
int main()
{
	Sphere c(1.0);
    cout<<"球体的表面积是:"<<endl;
    func1(c);
    cout<<"球体的体积是:"<<endl;
    func2(c);
    Column d(1.0,2.0);
    cout<<"圆柱体的表面积是:"<<endl;
    func1(d);
    cout<<"圆柱体的体积是:"<<endl;
    func2(d);
	return 0;
}
