#include "Class define.h"
#include <iostream>
using namespace std;
Coordinate::Coordinate(const Coordinate &C):m_iX(0),m_iY(0)
{
	m_p=new int;
	*m_p=*C.m_p;
	p=C.p;
	cout<<"拷贝构造函数"<<endl; 
}
Coordinate::Coordinate(int x=0,int y=0):m_iX(x),m_iY(y)
{
	m_p=new int;
	*m_p=5;
	p=123;
	cout<<"构造函数"<<endl; 
}
void Coordinate::set(int x,int y)
{
	m_iX=x;
	m_iY=y;
}
Coordinate::~Coordinate()
{
	delete m_p;
	cout<<"析构函数"<<endl; 
}
void Coordinate::get()
{
	cout<<"x="<<m_iX<<","<<"y="<<m_iY<<endl;
}
