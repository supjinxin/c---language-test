#include <iostream>
#include <vector>


class A
{
public:

	A(int n = 0) : m_n(n) {}

public:
	virtual int f() const { return m_n ;}
	virtual ~A() {}

protected:
	int m_n;
};


class B : public A
{
public:
	B(int n=0) : A(n) { }
public:
	virtual int f() const {return m_n+1; }

};

int main()
{

	const A a(1);
	const B b(3);
	const A *x[2] = { &a, &b };
	typedef std::vector<A> V;
	V vv;
	vv.push_back(a);
	vv.push_back(b);
	V::const_iterator i = vv.begin();
	
	std::cout << x[0]->f() << x[1]->f()
			<< i->f() << (i+1)->f() <<std::endl;

	return 0;
}

