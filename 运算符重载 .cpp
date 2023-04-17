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
    cout<<"请输入第一个复数的实部与虚部:"<<endl;
    cin>>real_1>>imag_1;
    Complex c1(real_1,imag_1);
    cout<<"请输入第二个复数的实部与虚部:"<<endl;
    cin>>real_1>>imag_1;
    Complex c2(real_2,imag_2);
    if(c1==c2) cout<<"相等"<<endl;
    else cout<<"不相等"<<endl;
	double r = !c1;
	cout<<"第一个复数的模为:"<<r<<endl;
	Complex c3 = ~c1;
	cout<<"第一个共轭复数是:"<<endl; 
	c3.display();
	return 0; 
}

