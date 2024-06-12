#include<iostream>
using namespace std;
class Demo
{
	public:
	{
		int ino1; //characteristics
		int ino2; //characteristics
	}
	Demo()
	{
		cout<<"This is an constructor\n";  //Constuctor 
	}
	~Demo()
	{
		cout<<"This is an destructor\n"; //Destructor
	}
	void fun(intx)  //void fun(Demo*const this , intx)
	{
		cout<<"Inside fun\n";
	}
};

int main()
{
	Demo obj();
	Demo*p = NULL;
	
	//p=(Demo*) malloc(Sizeof(Demo));
	
	//free(p);
	
	p= new Demo; //p=new Demo(10,20);
	cout<<p-> no1; //0(output)
	
	p->fun(11);  //fun(p,11) fun(10,100)
	
	delete p;
	
	return 0;
}
	
	
            	