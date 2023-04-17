#include<iostream>
#include<cmath>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
	Complex() { }
    Complex(double real,double imag):real(real),imag(imag) {  }
 	bool operator ==(Complex &c)
    {
    	 return this->real == c.real && this->imag == c.imag;
    }
    double operator ! ()
    {
    	return sqrt(real*real+imag*imag);
	}
	Complex operator ~()
	{
		Complex temp;
		temp.real = this->real;
		temp.imag = -(this->imag);
		return temp;
	}
	void display()
	{
		if(imag<0)
			cout<<real<<imag<<"i"<<endl;
		if(imag>0)
			cout<<real<<"+"<<imag<<"i"<<endl;
	}
};
int main()
{
    double real_1,imag_1,real_2,imag_2;
    cout<<"�������һ��������ʵ�����鲿:"<<endl;
    cin>>real_1>>imag_1;
    Complex c1(real_1,imag_1);
    cout<<"������ڶ���������ʵ�����鲿:"<<endl;
    cin>>real_1>>imag_1;
    Complex c2(real_2,imag_2);
    if(c1==c2) cout<<"���"<<endl;
    else cout<<"�����"<<endl;
	double r = !c1;
	cout<<"��һ��������ģΪ:"<<r<<endl;
	Complex c3 = ~c1;
	cout<<"��һ���������:"<<endl; 
	c3.display();
	return 0; 
}

